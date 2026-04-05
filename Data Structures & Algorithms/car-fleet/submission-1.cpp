class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairs;
        vector<double> st;
        for(int i=0; i<position.size(); ++i){pairs.push_back({position[i], speed[i]});}

        sort(pairs.rbegin(), pairs.rend());

        for(auto p : pairs){
            st.push_back((double) (target-p.first) / p.second);
            if(st[st.size()-2] >= st.back()){
                st.pop_back();
            }
        }

        return st.size();
    }
};

// {position, speed} target
// [{2, 4},{5, 2},{7, 1}] 10

//   *     *   * - - ->
// 1 2 3 4 5 6 7 8 9 10

// stack : 7, 5
// stack : 7 
// stack : 7, 2 
// stack : 7 
// output = 1
// if t_[top()-1] >= t_[top()] --> pop(), and remain mean diff. car fleets
