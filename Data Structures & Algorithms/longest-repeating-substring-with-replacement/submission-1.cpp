class Solution {
public:
    int characterReplacement(string s, int k) {
        int res=0;
        for(int i=0; i<s.length();++i){
            unordered_map<char,int> map_char;
            int maxf=0;
            for(int j=i; j<s.length();++j){
                ++map_char[s[j]];
                maxf = max(maxf, map_char[s[j]]);
                if((j-i+1) - maxf <= k){
                    res = max(res, j-i+1);
                }
            }
        }
        return res;
    }
};


