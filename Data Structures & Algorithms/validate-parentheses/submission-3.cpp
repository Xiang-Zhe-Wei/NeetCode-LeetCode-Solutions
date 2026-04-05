class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char x : s) {
            if (x=='(' || x=='[' || x=='{') {
                st.push(x);
            } else {
                if (st.empty()) return false; // 防止 top() on empty
                char t = st.top();
                if ((t=='(' && x==')') || (t=='[' && x==']') || (t=='{' && x=='}')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
