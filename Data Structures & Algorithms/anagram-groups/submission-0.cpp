class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> origin_strs = strs;
        unordered_map<string, vector<int>> hashmap;
        for(auto & x:strs){sort(x.begin(), x.end());}
        for(int i=0; i<strs.size(); ++i){
            hashmap[strs[i]].push_back(i);
        }

        vector<vector<string>> res;
        for(auto str:hashmap){
            vector<string> tmp;
            for(auto num:str.second){
                tmp.push_back(origin_strs[num]);
            }
            res.push_back(tmp);
        }
        return res;
    }
};
