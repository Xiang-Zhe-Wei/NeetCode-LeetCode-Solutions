class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0, r=nums.size()-1;
        int mini = nums[0];
        while(l<=r){
            if(nums[l] < nums[r]){
                mini = min(nums[l],mini);
                return mini; 
            }

            int m = (l+r)/2;
            mini = min(nums[m], mini);
            if(nums[l] <= nums[m]){
                l=m+1;
            }else{
                r=m-1;
            }
        }
        return mini;
    }
};
