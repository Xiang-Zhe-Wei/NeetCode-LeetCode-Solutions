class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> hashmap;
        vector<vector<int>> factor(nums.size()+1);
        for(auto & x : nums){
            hashmap[x]++; 
        }
        for(auto & x : hashmap){
            factor[x.second].push_back(x.first);
        }

        vector<int> res;
        for(int i = factor.size()-1; i > 0; --i){
            for(auto & x : factor[i]){
                if(res.size() < k)
                    res.push_back(x);
            }
        }
        return res;
    }
};
