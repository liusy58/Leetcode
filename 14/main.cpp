#include<iostream>
#include<vector>
using namespace std;


string longestCommonPrefix(vector<string>& strs) {
    string res="";
    if(strs.empty())
        return res;
    for(int i=1;i<=strs[0].size();++i)
    {
        string temp=strs[0].substr(0,i);
        for(int j=1;j<strs.size();++j)
            if(temp!=strs[j].substr(0,i))
                return res;
        res=temp;
    }
    return res;
}

