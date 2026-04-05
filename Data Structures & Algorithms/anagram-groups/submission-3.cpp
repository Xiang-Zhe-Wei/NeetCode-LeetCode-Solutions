class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for(string & s : strs){
            string origin_str = s;
            sort(s.begin(), s.end());
            hashmap[s].push_back(origin_str);
        }

        vector<vector<string>> res;
        for(auto pairs: hashmap){
            res.push_back(pairs.second);
        }
        return res;
    }
};
