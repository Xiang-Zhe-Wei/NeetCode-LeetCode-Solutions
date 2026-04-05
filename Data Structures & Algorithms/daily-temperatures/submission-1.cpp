class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> st; // {tmp, index};
        vector<int> res(temperatures.size(), 0);

        for(int i=0; i<temperatures.size(); i++){
            int t = temperatures[i];
            while(!st.empty() &&  t > st.top().first){ 
                pair pairs = st.top();
                res[pairs.second] = i - pairs.second;
                st.pop();
            }
            st.push({t, i});
        }
        return res;
    }
};

// 30 27 40
// 30 