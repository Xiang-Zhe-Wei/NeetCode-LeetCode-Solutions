class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for(string & str : strs){
            string origin_str = str;
            sort(str.begin(), str.end());
            hashmap[str].push_back(origin_str);
        }

        vector<vector<string>> res;
        for(auto pairs: hashmap){
            res.push_back(pairs.second);
        }
        return res;
    }
};

// Time:O(m), Space:O(mn)
// m = num of str in strs, n = num of char in each str
