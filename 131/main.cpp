 bool ispalindrome(string&s)
    {
        int cnt=s.size();
        for(int i=0;i<cnt/2;++i)
        {
            if(s[i]!=s[cnt-1-i])
                return false;
        }
        return true;
    }
   void help(vector<vector<string>>&res,vector<string>&temp,int start,string &s)
   {
       if(start>=s.size())
       {
           res.push_back(temp);
           return;
    }
       for(int i=start;i<s.size();++i)
       {
           string str1=s.substr(start,i-start+1);
           if(ispalindrome(str1))
           {
               temp.push_back(str1);
               help(res,temp,i+1,s);
               temp.pop_back();
           }
       }
           
    }
    vector<vector<string>> partition(string s) {
        
        vector<vector<string>>res;
        vector<string>temp;
        help(res,temp,0,s);
        return res;
    }