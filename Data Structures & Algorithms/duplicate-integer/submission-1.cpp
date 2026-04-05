class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> table;
        for(auto x : nums){
            if(table.count(x)){
                return true;    
            }
            table.insert(x);
        }
        return false;
    }
};