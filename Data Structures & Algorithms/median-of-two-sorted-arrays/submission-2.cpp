class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& A = nums1;
        vector<int>& B = nums2;

        int total = A.size() + B.size();
        int half = total / 2;

        // 確保 A 是較短的
        if (A.size() > B.size()) {
            swap(A, B);
        }

        int l = 0, r = A.size();

        while (l<=r) {
            int i = (l + r) / 2;          // A 的 partition
            int j = half - i;         // B 的 partition

            int Aleft  = (i > 0) ? A[i - 1] : INT_MIN;
            int Aright = (i < A.size()) ? A[i] : INT_MAX;
            int Bleft  = (j > 0) ? B[j - 1] : INT_MIN;
            int Bright = (j < B.size()) ? B[j] : INT_MAX;

            // 找到正確 partition
            if (Aleft <= Bright && Bleft <= Aright) {
                // 奇數
                if (total % 2) {
                    return min(Aright, Bright);
                }
                // 偶數
                return (max(Aleft, Bleft) + min(Aright, Bright)) / 2.0;
            }
            else if (Aleft > Bright) {
                r = i - 1;
            }
            else {
                l = i + 1;
            }
        }
    }
};