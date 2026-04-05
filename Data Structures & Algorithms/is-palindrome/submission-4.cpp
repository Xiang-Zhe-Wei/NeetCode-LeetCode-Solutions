class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(char char_s : s){
            if(isalnum(char_s)){
                str += tolower(char_s);
            }
        }
        return str == string(str.rbegin(), str.rend());
    }
};
