class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        
        vector<int> hashvector(26);
        for(int i=0; i<s.length(); ++i){
            ++hashvector[s[i]-'a'];
            --hashvector[t[i]-'a'];
        }
        for(int i=0; i<26; ++i){
            if(hashvector[i] != 0){
                return false;
            }
        }
        return true;
    }
};

// Time:O(m+n), Space:O(1)