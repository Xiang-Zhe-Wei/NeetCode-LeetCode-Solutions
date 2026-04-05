class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> hashmap = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for(char x : s){
            if(hashmap.count(x)){
                if(!st.empty() && hashmap[x]==st.top()){
                   st.pop();
                }else{
                    return false;
                }
            }else{
                st.push(x);
            }
        }
        return st.empty();
    }
};

// ([])
// [(])

// )[(]