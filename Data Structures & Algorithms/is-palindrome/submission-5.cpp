class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.length()-1;
        while(l < r){
            while(l<r && !isalphnum((s[l]))){
                ++l;
            }
            while(l<r && !isalphnum((s[r]))){
                --r;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            ++l;
            --r;
        }
        return true;
    }
    bool isalphnum(char c){
        if( (c >= 'a' && c <='z') ||
        (c >= 'A' && c <='Z') ||
        (c >= '0' && c <='9') ){
            return true;
        }
        return false;
    }
};
