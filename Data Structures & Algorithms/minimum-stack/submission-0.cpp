class MinStack {
public:
    MinStack() {
        f1 = -1;
    }
    
    void push(int val) {
        ++f1;
        st.push_back(val);
    }
    
    void pop() {
        st.erase(st.end());
        --f1;
    }
    
    int top() {
        return st[st.size()-1];
    }
    
    int getMin() {
        int m = INT_MAX;
        for(auto x : st){
            m = min(x, m);
        }
        return m;
    }
private:
    int f1;
    vector<int> st;
};
