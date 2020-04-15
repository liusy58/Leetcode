#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {

   int start=0,end=height.size()-1;
   int res=0;
   while(start<end)
   {
       res=max(res,(end-start)*min(height[start],height[end]));
       if(height[start]<height[end])
            ++start;
        else
            --end;
   } 
   return res;
        
}

int main()
{

}
