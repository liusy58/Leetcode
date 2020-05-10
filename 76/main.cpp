    string minWindow(string s, string t) {
        vector<int>map(128,0);
        int counter=t.size();
        int begin=0,end=0;
        int d=INT_MAX;
        int first_index=0;
        for(auto m:t)
            map[m]++;
        while(end<s.size())
        {
            if(map[s[end++]]-->0)
                --counter;
            while(!counter)
            {
                if(end-begin<d)
                    d=end-(first_index=begin);
                if(map[s[begin++]]++==0)
                    ++counter;
            }
        }
        return d==INT_MAX?"":s.substr(first_index,d);
    }