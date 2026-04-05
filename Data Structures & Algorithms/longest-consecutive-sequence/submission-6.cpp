class Solution {
public:
int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());

    int cts = 1;
    int maxLen = 1;

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            continue; // ⭐ duplicate：直接跳過
        }
        if (nums[i] == nums[i - 1] + 1) {
            cts++; // ⭐ 真正連續才加
        } else {
            cts = 1; // ⭐ 斷掉才 reset
        }
        maxLen = max(maxLen, cts);
    }

    return maxLen;
}

};


// 0,1,1,2,4,5,6