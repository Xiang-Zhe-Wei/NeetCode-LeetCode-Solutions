class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        sort(nums.begin(), nums.end());

        int cts = 1, maxLen = 1;
        for(int i=1; i<nums.size();++i){
            if(nums[i-1] == nums[i]) continue;
            if(nums[i-1]+1 == nums[i]){
                ++cts;
            }else{
                cts = 1;
            }
            maxLen = max(cts, maxLen);
        }
        return maxLen;
    }
};
