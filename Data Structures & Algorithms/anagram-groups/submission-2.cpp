class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash_map;
        
        for(string str : strs){
            vector<int> counts(26);
            for(char s : str){
                counts[s - 'a']++;
            }
            string str_idx = "";
            for(int i=0; i < 26; ++i){
                str_idx += ","  + to_string(counts[i]);
            }
            hash_map[str_idx].push_back(str);
        }

        vector<vector<string>> res;
        for(auto pairs : hash_map){
            res.push_back(pairs.second);
        }
        return res;
    }
};
