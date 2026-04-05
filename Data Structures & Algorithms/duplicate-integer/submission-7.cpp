class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;
        for(int x : nums){
            if(hashset.count(x)){
                return true;
            }
            hashset.insert(x);
        }
        return false;
    }
};


// Time: O(n), Space:O(n)