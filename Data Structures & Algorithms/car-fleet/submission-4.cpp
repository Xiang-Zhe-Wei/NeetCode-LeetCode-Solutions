class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> pairs;
        for(int i=0; i<position.size();++i){pairs.push_back({position[i], speed[i]});}
        sort(pairs.rbegin(), pairs.rend());

        vector<double> st_time;
        for(auto p : pairs){
            st_time.push_back( (double) (target - p.first) / p.second);
            if(st_time.size() >=2 && st_time.back() <= st_time[st_time.size()-2]){
                st_time.pop_back();
            }
        }
        return st_time.size();
    }
};
