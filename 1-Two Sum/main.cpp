#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
    for(int i=0;i<nums.size();++i)
    {
        for(int j=i+1;j< nums.size();++j)
        {
            if(nums[i]==target-nums[j])
                return {i,j};
        }
    }
    return {};
}
int main()
{
    vector<int>t={2,7,11,15};
    auto m=twoSum(t,9);
    for(auto i:m)
        cout<<i<<endl;
}