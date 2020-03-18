#include <iostream>
#include <vector>
#include<queue>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int len=nums.size();
    vector<int>left(len,1);
    vector<int>right(len,1);
    vector<int>res(len,1);
    for(int i=1;i<len;++i)
        left[i]=left[i-1]*nums[i-1];
    for(int i=len-2;i>=0;--i)
        right[i]=right[i+1]*nums[i+1];
    for(int i=0;i<len;++i)
        res[i]=left[i]*right[i];
    return res;
}

int main()
{
    vector<int> nums{1,2,3,4};
    auto res=productExceptSelf(nums);
    for(auto i:res)
        cout<<i<<endl;
}