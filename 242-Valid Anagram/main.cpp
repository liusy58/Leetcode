#include<iostream>
#include<unordered_map>
using namespace std;
bool isAnagram(string s, string t){
    if(s.size()!=t.size())
        return false;
    unordered_map<char,int>temp;
    for(auto i:s)
        ++temp[i];
    for(auto i:t)
    {
        if(!temp[i])
            return false;
        --temp[i];
    }
    return true;
}

int  main()
{
    while(1)
    {
        string s,t;
        cin>>s>>t;
        cout<<isAnagram(s,t)<<endl;
    }
}