class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(auto x: s){
            if(x == ' ') continue;
            if(('a' <= x && x <= 'z') || ('0' <= x && x <= '9')){
                str += x;
            }
            if('A' <= x && x <= 'Z'){
                str += tolower(x);
            }
        }
        cout << str;
        int start = 0;
        int end = str.length() - 1;
        while(start < end){
            if(str[start] == str[end]){
                ++start;
                --end;
            }else{
                return false;
            }
        }

        return true ? (start >= end) : (start < end);
    }
};

// weew
// werew
