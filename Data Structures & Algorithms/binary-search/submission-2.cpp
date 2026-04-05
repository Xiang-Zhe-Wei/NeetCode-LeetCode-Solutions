class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        while(l <= r){
            int m = l + (r-l) / 2;
            if(target > nums[m]){
                l = l+1;
            }else if(target < nums[m]){
                r = r-1;
            }else{
                return m;
            }
        }
        return -1;
    }
};
