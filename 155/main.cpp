class MinStack {
public:
    vector<int>vec;
    int minn;
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int x) {
        if(vec.empty())
            minn=x;
        vec.push_back(x);
        minn=min(minn,x);
    }
    
    void pop() {
        vec.pop_back();
        minn=vec[0];
        for(int i=1;i<vec.size();++i)
            minn=min(minn,vec[i]);
    }
    
    int top() {
        return vec[vec.size()-1];
    }
    
    int getMin() {
        return minn;
    }
};