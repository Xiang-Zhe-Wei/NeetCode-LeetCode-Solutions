class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int Row=matrix.size();
        int Col=matrix[0].size();

        int up=0, bot=Row-1, mid;
        while(up<=bot){
            mid = (up+bot) / 2;
            if(target > matrix[mid][Col-1]){
                up=up+1;
            }else if(target < matrix[mid][0]){
                bot=bot-1;
            }else{
                break;
            }
        }
        
        if(!(up<=bot)){return false;}

        int l=0,r=Col-1;
        while(l<=r){
            int m = (l+r) / 2;
            if(target > matrix[mid][m]){
                l=l+1;
            }else if(target < matrix[mid][m]){
                r=r-1;
            }else{
                return true;
            }
        }
        return false;
    }
};
