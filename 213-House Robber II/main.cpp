#include<iostream>
#include<vector>
using namespace std;

  int rob(vector<int> &nums, int left, int right)
{
    if(right-left<=1)
        return nums[left];
    vector<int>dp(right,0);
    dp[left]=nums[left];
    dp[left+1]=max(nums[left],nums[left+1]);
    for(int i=left+2;i<right;++i)
        dp[i]=max(nums[i]+dp[i-2],dp[i-1]);
    return dp.back();
}
int rob(vector<int>& nums) {
    if(nums.empty())
        return 0;
    if (nums.size() <= 1) return nums.empty() ? 0 : nums[0];
    return max(rob(nums, 0, (int)nums.size() - 1), rob(nums, 1, (int)nums.size()));
}