class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, int> hashmap_s, hashmap_t;
        for(int i =0; i< s.length(); ++i){
            ++hashmap_s[s[i]];
            ++hashmap_t[t[i]];
        }
        return hashmap_s == hashmap_t;

    }
};
// Time: O(n+m) Space: O(n+m)