class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashmap_s;
        unordered_map<char, int> hashmap_t;
        for(char x : s){
            ++hashmap_s[x];
        }
        for(char x : t){
            ++hashmap_t[x];
        }
        return hashmap_s == hashmap_t;
    }
};

// Time:O(n + m), Space:O(1)