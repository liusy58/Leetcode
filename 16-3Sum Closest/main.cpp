#include<iostream>
#include<vector>

using namespace std;


int threeSumClosest(vector<int>& nums, int target) {
       int res=0;
       int diff=INT_MAX;
       sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size()-2;++i)
       {
           int left=i+1;int right=nums.size()-1;
           
           while(left<right)
           {
                int tempsum=nums[i]+nums[left]+nums[right];
                int tempdiff=abs(target-tempsum);
                if(tempdiff<diff)
                {
                    diff=tempdiff;
                    res=tempsum;
                }
                if(tempsum<target)
                    ++left;
                else
                    --right;
           }
       } 

       return res;
}
int main()
{

}