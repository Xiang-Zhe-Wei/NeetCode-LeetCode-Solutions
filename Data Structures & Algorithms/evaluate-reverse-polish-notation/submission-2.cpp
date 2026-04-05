class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string x : tokens){
            if(x != "+" && x != "-" && x != "*" && x != "/"){
                st.push(stoi(x));
            }else{
                int n2 = st.top(); st.pop();
                int n1 = st.top(); st.pop();
                if(x == "+"){
                    st.push(n1+n2);
                }else if(x == "-"){
                    st.push(n1-n2);
                }else if(x == "*"){
                    st.push(n1*n2);
                }else if(x == "/"){
                    st.push(n1/n2);
                }
            }
        }
        return st.top();
    }
};
