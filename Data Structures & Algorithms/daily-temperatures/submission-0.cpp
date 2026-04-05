class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(), 0);
        stack<pair<int, int>> st; // {tmp, index}

        for(int i=0; i<temperatures.size(); ++i){
            int tmp = temperatures[i];
            while(!st.empty() && st.top().first < tmp){
                auto pairs = st.top();
                res[pairs.second] = i - pairs.second;
                st.pop();
            }
            st.push({tmp, i});
        }   
        return res;
    }
};
