class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        for(string str : strs){
            vector<int> hashvec(26);
            for(char c : str){++hashvec[c-'a'];}

            string str_idx = "";
            for(int x : hashvec){
                str_idx += to_string(x) + ",";
            }
            hashmap[str_idx].push_back(str);
        }

        vector<vector<string>> res;
        for(auto pairs : hashmap){
            res.push_back(pairs.second);
        }
        return res;
    }
};

// Time:O(mn), Space:O(mn)
// m = num of str in strs, n = num of char in each str
