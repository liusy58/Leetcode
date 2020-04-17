#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums)
{
    vector<vector<int>>res;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();++i)
    {
        if(i>0&&nums[i]==nums[i-1])
            continue;
        int left=i+1;
        int right=(int)nums.size()-1;
        while(left<right)
        {
            int t=nums[i]+nums[left]+nums[right];
            if(t<0)
                ++left;
            else if(t>0)
                --right;
            else
            {
                res.push_back({nums[i],nums[left],nums[right]});
                int l=nums[left];
                int r=nums[right];
                while(left<nums.size()&&l==nums[left])
                    ++left;
                while(right>=0&&r==nums[right])
                    --right;
            }
        }
    }
    return res;
}