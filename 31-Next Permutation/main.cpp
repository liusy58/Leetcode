#include<iostream>
#include<vector>
using namespace std;
void nextPermutation(vector<int>& nums) {
    int i=nums.size()-1;
    while(i>=0&&nums[i]<=nums[i-1])
        --i;
    if(!i)
    {
        sort(nums.begin(),nums.end());
        return;
    }
    int index=i-1;
    int miniindex=i;
    int minn=nums[i];
    int j=i;
    while(j<nums.size())
    {
        if(nums[j]>nums[index]&&nums[j]<minn)
        {
            miniindex=j;
            minn=nums[j];
        }
        ++j;
    }
    swap(nums[index],nums[miniindex]);
    sort(nums.begin()+i,nums.end());
}

int main()
{

}