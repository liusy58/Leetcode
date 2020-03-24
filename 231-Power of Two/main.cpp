#include<iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if(n<=0)
        return false;
    int res=0;
    while(n)
    {
        res+=(n&1);
        n=n>>1;
    }
    return res==1;
}

int main()
{
    while(1)
    {
        int t;
        cin>>t;
        cout<<isPowerOfTwo(t)<<endl;
    }
}