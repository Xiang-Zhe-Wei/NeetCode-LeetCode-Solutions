class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        unordered_map<char, char> hashmap = {
            {')' , '('},
            {']' , '['},
            {'}' , '{'}
        };


        for(char x : s){
            if(hashmap.count(x)){
                if(!st.empty() && st.top() == hashmap[x]){
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



// )[](

// [(](