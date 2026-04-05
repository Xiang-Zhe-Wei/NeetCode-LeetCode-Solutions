class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> map_str;
        int l=0;
        int max_f = 0;
        int res = 0;
        for(int r=0; r<s.length();++r){
            map_str[s[r]]++;
            max_f = max(max_f, map_str[s[r]]);
            while((r-l+1) - max_f > k){
                map_str[s[l]]--;
                l++;
            }
            res = max(res, r-l+1);
        }
        return res;
    }
};
