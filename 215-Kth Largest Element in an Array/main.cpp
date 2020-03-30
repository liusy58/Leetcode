#include<iostream>
#include<vector>
using namespace std;

int help(vector<int>& nums, int k,int left,int right)
{
   // cout<<left<<"    "<<right<<"   "<<k<<endl;
    int nowindex=left;
    for(int i=left;i<right;++i)
    {
        if(nums[i]<nums[right])
        {
            swap(nums[nowindex++],nums[i]);
        }
    }
    swap(nums[right],nums[nowindex]);
    if(k==nowindex)
        return nums[nowindex];
    if(nowindex>k)
        return help(nums,k,left,nowindex-1);
    return help(nums,k,nowindex+1,right);
}


int findKthLargest(vector<int>& nums, int k) {
    int left=0;
    int right=nums.size()-1;
    return help(nums,right-k+1,0,right);
}

int main()
{

}