    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>res;
        map<string,int>str2index;
        for(auto str:strs)
        {
            string str_temp=str;
            sort(str_temp.begin(),str_temp.end());
            if(str2index.count(str_temp))
            {
                res[str2index[str_temp]].push_back(str);
            }
            else
            {
                res.push_back({str});
                sort(str.begin(),str.end());
                str2index[str]=res.size()-1;
            }
           
        }
        return res;
    }