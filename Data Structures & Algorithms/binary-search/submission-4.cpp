class Solution {
public:
int search(vector<int>& nums, int target) {
    int l = 0, r = nums.size() - 1;
    int res = -1;

    while (l <= r) {
        int m = l + (r - l) / 2;
        if (nums[m] >= target) { 
            // 如果中間值大於等於 target，我們就往左收縮
            if (nums[m] == target) res = m; // 暫存答案，但繼續往左找
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}
};
