class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i=0; i<nums.size(); ++i){
            if(nums[i]>0) break;
            if(i>0 && nums[i-1] == nums[i]) continue;

            int l=i+1, r=nums.size()-1;
            while(l<r){
                int cur = nums[i]+nums[l]+nums[r];
                if(cur < 0){
                    ++l;
                }else if(cur > 0){
                    --r;
                }else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    while(l<r && nums[l]==nums[l+1]){
                        ++l;
                    }
                    ++l;
                    --r;
                }
            }
        }
        return res;
    }
};
// 2 2 2 3 4 5
