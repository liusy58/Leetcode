#include<iostream>
using namespace std;

 bool isPalindrome(int x) {
    if(x==0)
        return true;
    if(x<0||(x%10==0))
        return false;
    int inv=0;
    while(x>inv)//这样写是为了防止溢出
    {
        inv=inv*10+x%10;
        x/=10;
    }
    return (inv==x)||(x==inv/10);
}

int main()
{
    while(1)
    {
        int t;
        cin>>t;
        cout<<isPalindrome(t)<<endl;
    }
}