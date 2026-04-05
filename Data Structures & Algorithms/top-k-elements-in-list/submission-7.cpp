class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap; // hashmap[num] --> appear times
        for(int x : nums){
            ++hashmap[x]; 
        }

        vector<vector<int>> tablevec(nums.size()+1);
        for(auto pairs : hashmap){
            tablevec[pairs.second].push_back(pairs.first);
        }

        vector<int> res;
        for(int i=tablevec.size()-1; i > 0; --i){
            for(auto x : tablevec[i]){
                if(res.size() == k){
                    return res;
                }
                res.push_back(x);
            }
        }
        return res;
    }
};

// Time:O(n), Space:O(n)