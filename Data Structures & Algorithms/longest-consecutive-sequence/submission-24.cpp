class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset(nums.begin(), nums.end());

        int maxLen = 0;
        for(int n : hashset){
            if(hashset.find(n-1) == hashset.end()){
            int cts = 1;
                while(hashset.find(n+cts) != hashset.end()){
                    ++cts;
                }
            maxLen = max(maxLen, cts);
            }
        }
        return maxLen;
    }
};
