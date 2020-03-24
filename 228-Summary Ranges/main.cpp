#include<iostream>
#include<vector>
using namespace std;
vector<string> summaryRanges(vector<int>& nums) {
    vector<string> res;
    if(nums.empty())
        return res;
    int start=nums[0],end=nums[0];
    for(int i=1;i<nums.size();++i)
    {
        if(nums[i]==end+1)
        {
            end++;
        }
        else
        {
            if(start==end)
            {
                res.push_back(to_string(start));
            }
            else
            {
                res.push_back(to_string(start)+"->"+to_string(end));
            }
            start=end=nums[i];
        }
        
    }
    if(start==end)
    {
        res.push_back(to_string(start));
    }
    else
    {
        res.push_back(to_string(start)+"->"+to_string(end));
    }
    return res;
}
int main()
{

}