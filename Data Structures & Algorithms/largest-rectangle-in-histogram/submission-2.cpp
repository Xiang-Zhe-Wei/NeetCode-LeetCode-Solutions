class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxArea = 0;
        for(int i=0; i<heights.size(); ++i){
            
            int cur_min = heights[i];

            int rightMost = i+1;
            while(rightMost < n  && heights[rightMost] >= cur_min){
                rightMost++;
            }
            
            int leftMost = i-1;
            while(leftMost >= 0 && heights[leftMost] >= cur_min){
                leftMost--;
            }

            rightMost--;
            leftMost++;
            maxArea = max(maxArea, cur_min * (rightMost-leftMost+1));
        }
        return maxArea;
    }
};
