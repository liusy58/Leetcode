#include<iostream>
#include<unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int start=0;
    unordered_map<char,int>mp;
    int res=0;

    for(int i=0;i<s.size();++i)
    {
        if(!mp.count(s[i]))
        {
            mp[s[i]]=i+1;
        }
        else
        {
            if(mp[s[i]]>start)
            {
                start=mp[s[i]];
                mp[s[i]]=i+1;
            }
        }
        res=max(res,mp[s[i]]-start);
    }
    return res;
}
int main()
{
    while(1)
    {
        string str;
        cin>>str;
        cout<<lengthOfLongestSubstring(str)<<endl;
    }
}

