class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(vector<int> ele:matrix){
            int l=0, r=ele.size()-1;
            while(l<=r){
                int m=(l+r) / 2;
                if(target > ele[m]){
                    l=m+1;
                }else if(target < ele[m]){
                    r=r-1;
                }else{
                    return true;
                }
            }
        }
        
        return false;
    }
};
