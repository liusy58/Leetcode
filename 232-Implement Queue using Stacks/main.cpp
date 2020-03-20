#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MyQueue {
public:   
    stack<int>que;
    /** Initialize your data structure here. */
    MyQueue() {
    }
    /** Push element x to the back of queue. */
    void push(int x) {
        que.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        stack<int>temp;
        int t;
        while(!que.empty())
        {
            t=que.top();
            temp.push(t);
            que.pop();
        }
        int res=t;
        temp.pop();
        while(!temp.empty())
        {
            int t=temp.top();
            que.push(t);
            temp.pop();
        }
        return res;
    }
    
    /** Get the front element. */
    int peek() {
        stack<int>temp;
        int t;
        while(!que.empty())
        {
            t=que.top();
            temp.push(t);
            que.pop();
        }
        int res=t;
        while(!temp.empty())
        {
            int t=temp.top();
            que.push(t);
            temp.pop();
        }
        return res;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return que.empty();
    }
};

int main()
{
    MyQueue q;
    q.push(1);
    q.push(1);
    cout<<q.peek()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.empty()<<endl;

}