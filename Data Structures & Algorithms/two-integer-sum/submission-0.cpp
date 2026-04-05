class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashmap;
        for(int i=0; i < nums.size(); ++i){
            int another_target = target-nums[i];
            if(hashmap.find(another_target) != hashmap.end()){
                return {hashmap[another_target], i};
            }
            if(hashmap.find(nums[i]) == hashmap.end()){
                hashmap[nums[i]] = i;
            }
            
        }
    }
};
