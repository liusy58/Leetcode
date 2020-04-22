#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
    stack<char>Sta;
    char temp;
    for(auto m:s)
    {
        if(m=='('||m=='['||m=='{')
            Sta.push(m);
        else
        {
            if(Sta.empty())
                return false;
            temp=Sta.top();
            Sta.pop();
            if(m==')'&&temp!='(')
                return false;
            if(m==']'&&temp!='[')
                return false;
            if(m=='}'&&temp!='{')
                return false;
        }
    }
    return Sta.empty();

}

int main()
{

}