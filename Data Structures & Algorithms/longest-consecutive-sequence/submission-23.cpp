class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hashset(nums.begin(), nums.end());

        int maxLen = 0;
        for(int n : hashset){
            int cts = 1;
            if(hashset.find(n-1) == hashset.end()){
                while(hashset.find(n+cts) != hashset.end()){
                    ++cts;
                }
            }
            maxLen = max(maxLen, cts);
        }
        return maxLen;
    }
};
