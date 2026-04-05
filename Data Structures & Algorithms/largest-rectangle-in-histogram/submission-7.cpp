class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(), area = 0;
        stack<pair<int,int>> st; // {idx,h}


        for(int i=0; i<n; ++i){
            int start = i;
            while(!st.empty() && st.top().second > heights[i]){
                int idx = st.top().first;
                int h = st.top().second;
                area = max(area, (i-idx)*h);
                start = idx;
                st.pop();
            }
            st.push({start, heights[i]});
        }


        while(!st.empty()){
            int idx = st.top().first;
            int h = st.top().second;
            area = max(area, (n-idx)*h);
            st.pop();
        }

        return area;
    }
};
