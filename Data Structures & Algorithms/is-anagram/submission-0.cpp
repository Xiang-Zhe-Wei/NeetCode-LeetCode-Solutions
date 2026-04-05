class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashset[26] = {0};
        for(auto x : s){
            ++hashset[x-'a'];
        }
        for(auto x : t){
            --hashset[x-'a'];
        }
        
        for(int i=0; i<26; ++i){
            if(hashset[i] != 0){
                return false;
            }
            // cout << hashset[i] << " ";
        }
        return true;
    }
};
