class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int len1 = nums1.size(), len2 = nums2.size();
        vector<int> merge_num(len1+len2);
        copy(nums1.begin(), nums1.end(), merge_num.begin());
        copy(nums2.begin(), nums2.end(), merge_num.begin()+len1);
        sort(merge_num.begin(), merge_num.end());

        if(merge_num.size()%2 != 0){
            return merge_num[merge_num.size()/2];
        }else{
            return (merge_num[merge_num.size()/2] + merge_num[merge_num.size()/2-1]) / 2.0;
        }
    }
};
