class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x : s){
            if(!st.empty() &&(st.top()=='(' && x==')')){
                st.pop();
                continue;    
            }
            else if(!st.empty() && st.top()=='[' && x==']'){
                st.pop();    
                continue;
            }else if(!st.empty() && st.top()=='{' && x=='}'){
                st.pop();    
                continue;
            }
            st.push(x);
        }
        return st.empty() ? true : false;
    }
};
