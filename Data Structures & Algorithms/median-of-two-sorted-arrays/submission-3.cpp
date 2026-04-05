class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>& A = nums1;
        vector<int>& B = nums2;
        int tot = nums1.size()+nums2.size();
        if(A.size() > B.size()){
            swap(A,B);
        }
        int h = tot/2;
        int l=-1, r=A.size()-1;
        while(l<=r){
            int i = (l+r)/2;
            int j = h-i-2;

            int Al = (i>=0) ? A[i] : INT_MIN;
            int Ar = (i+1<A.size()) ? A[i+1] : INT_MAX;
            int Bl = (j>=0) ? B[j] : INT_MIN;
            int Br = (j+1<B.size()) ? B[j+1] : INT_MAX;

            if(Al<=Br && Bl<=Ar){
                if(tot%2==0){
                    return (max(Al,Bl)+min(Ar,Br))/2.0;
                }
                return min(Ar, Br);
            }else if(Al > Br){
                r = i-1;
            }else{
                l = i+1;
            }
        }
    }
};
