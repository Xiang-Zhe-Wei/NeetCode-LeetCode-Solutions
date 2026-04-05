class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        vector<int> res;
        for(auto x : nums){
            ++hashmap[x];
        }
        
        while(k > 0){
            int large_val = INT_MIN;
            int large_idx;
            for(auto x : hashmap){
                if(x.second > large_val){
                    large_val = x.second;
                    large_idx = x.first;
                }
            }
            res.push_back(large_idx);
            hashmap.erase(large_idx);
            --k;
        }

        return res;
    }
};
