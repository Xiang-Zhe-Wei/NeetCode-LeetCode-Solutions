class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size()-1;
        int max_a = 0;
        while(l < r){
            max_a = max(max_a, (r-l)*min(heights[l], heights[r]));
            if(heights[l] <= heights[r]){
                ++l;
            }else{
                --r;
            }
        }
        return max_a;
    }
};
