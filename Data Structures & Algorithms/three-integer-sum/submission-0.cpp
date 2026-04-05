class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> hashset;
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size();++i){
            for(int j=i+1; j<nums.size();++j){
                for(int k=j+1; k<nums.size();++k){
                    if(nums[i] + nums[j] + nums[k] == 0){
                        hashset.insert({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return vector<vector<int>> (hashset.begin(), hashset.end());
    }
};
