class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res = 0;
        for(int i=0; i<s.length();++i){
            unordered_set<char> str_set;
            for(int j=i;j<s.length();++j){
                if(str_set.find(s[j])!=str_set.end()){
                    break;
                }
                str_set.insert(s[j]);
            }
            res = max(res, (int)str_set.size());
        }
        return res;
    }
};
