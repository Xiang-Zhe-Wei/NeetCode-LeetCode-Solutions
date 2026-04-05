class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        vector<vector<int>> table(nums.size()+1);
        for(int x : nums){
            hashmap[x]++;
        }
        for(auto pairs : hashmap){
            table[pairs.second].push_back(pairs.first);
        }

        vector<int> res;
        for(int i = table.size()-1; i > 0; --i){
            for(int n : table[i]){
                res.push_back(n);
                if(res.size() == k){
                    return res;
                }
            }
        }
    }
};
