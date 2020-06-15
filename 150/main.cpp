#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

int evalRPN(vector<string>& tokens) {
    unordered_map<string, function<int (int, int) > > map = {
            { "+" , [] (int a, int b) { return a + b; } },
            { "-" , [] (int a, int b) { return a - b; } },
            { "*" , [] (int a, int b) { return a * b; } },
            { "/" , [] (int a, int b) { return a / b; } }
        };
    stack<int> st;
    for(auto &token:tokens)
    {
        if(!map.count(token))
            st.push(stoi(token));
        else
        {
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            st.push(map[token](op2,op1));
        }
        
    }
    return st.top();

}
int main()
{

}