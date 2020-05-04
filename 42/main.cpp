#include<iostream>
#include<vector>
using namespace std;

int trap(vector<int>& height)
{
    int num=height.size();
    if(!num)
        return 0;
    int res=0;
    vector<int>before(num,0);
    vector<int>after(num,0);
    for(int i=1;i<num;++i)
        before[i]=max(before[i-1],height[i-1]);
    for(int i=num-2;i>=0;--i)
        after[i]=max(after[i+1],height[i+1]);
    for(int i=1;i<num-1;++i)
    {
        int h=min(before[i],after[i]);
        if(height[i]<h)
            res+=h-height[i];
    }
    return res;     
}

int main()
{

}