class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int max_area = 0, n = heights.size();
        stack<pair<int,int>> st; // {idx, heights[i]}

        for(int i=0; i<n; ++i){
            int start = i;
            while(!st.empty() && st.top().second > heights[i]){
                int idx = st.top().first;
                int h = st.top().second;
                max_area = max(max_area, (i-idx)*h);
                start = idx;
                st.pop();
            }
            st.push({start, heights[i]});
        }

        while(!st.empty()){
            int idx = st.top().first;
            int h = st.top().second;
            max_area = max(max_area, (n-idx)*h);
            st.pop();
        }

        return max_area;
    }
};
