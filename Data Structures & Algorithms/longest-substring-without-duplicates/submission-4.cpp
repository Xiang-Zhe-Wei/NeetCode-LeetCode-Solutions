class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        unordered_set<char> str_set;
        int l=0;
        for(int r=0; r<s.length(); ++r){
            while(str_set.find(s[r]) != str_set.end()){
                str_set.erase(s[l]);
                l++;
            }
            str_set.insert(s[r]);
            res = max(res, (r-l+1));
        }
        return res;
    }
};

// abbc

