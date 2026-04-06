class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        vector<int>res;
        for(int r=k-1;r<nums.size();++r, l=r+1-k){
            int maxf = INT_MIN;
            for(int j=l; j<=r;++j){
                maxf = max(maxf, nums[j]);
            }
            res.push_back(maxf);
        }
        return res;
    }
};
