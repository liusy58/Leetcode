#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;
bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();++i)
    {
        if(mp[nums[i]]&&i-mp[nums[i]]<k)
        {
            //cout<<nums[i]<<endl;
            return true;
        }
        else
            mp[nums[i]]=i+1;
    }
    return false;
}