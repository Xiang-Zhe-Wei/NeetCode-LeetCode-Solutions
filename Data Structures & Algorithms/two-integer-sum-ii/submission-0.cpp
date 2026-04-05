class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashmap;
        for(int i=0; i<numbers.size();++i){
            int diff = target-numbers[i];
            if(hashmap.find(diff) != hashmap.end()){
                return {hashmap[diff]+1, i+1};
            }
            hashmap[numbers[i]] = i;
        }
    }
};
