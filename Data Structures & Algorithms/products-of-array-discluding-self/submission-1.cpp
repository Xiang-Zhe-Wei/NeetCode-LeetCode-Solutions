class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);

        for(int i = 1; i < nums.size(); ++i){
            res[i] = res[i-1] * nums[i-1];
        }
        
        int posfix = 1;
        for(int i=nums.size() - 1; i >= 0;--i){
            res[i] *= posfix;
            posfix *= nums[i];
        }

        return res;
    }
};
// Time:O(n), Space:O(n)

//        (1)  1  2  4  6  (1)
// prefix  1   1  1  2  8  48
// posfix 48  48 24  6  1   1 

// prefix
//  res    1   1  1  2  8  48  
// posfix
//  res    1  48 24 12  8  48  


//  res       48 24 12  8  
