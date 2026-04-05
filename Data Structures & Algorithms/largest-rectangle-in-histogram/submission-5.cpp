class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), max_area = 0;
        for(int i=0; i<n; ++i){
            int cur_min = heights[i];

            int left_most = i-1;
            while(left_most >=  0 && heights[left_most] >= cur_min){
                left_most--;
            }
            int right_most = i+1;
            while(right_most <=n-1 && heights[right_most] >= cur_min){
                right_most++;
            }
            
            left_most++;
            right_most--;
            max_area = max(max_area, cur_min * (right_most - left_most +1));
        }
        return max_area;
    }
};
