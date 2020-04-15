#include<iostream>
#include<sstream>

using namespace std;
int reverse(int x) {
    int flag=x<0?-1:1;
    x=abs(x);
    stringstream temp;
    temp<<x;
    string t;
    temp>>t;
    std::reverse(t.begin(),t.end());
    double res;
    stringstream temp2;
    temp2<<t;
    temp2>>res;
    res=res*flag;
    if(res>INT_MAX||res<INT_MIN)
        return 0;
    return (int)res;
}
int main()
{
    while(1)
    {
        int t;
        cin>>t;
        cout<<reverse(t)<<endl;
    }
}