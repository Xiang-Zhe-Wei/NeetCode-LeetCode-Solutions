class TimeMap {
private:
    unordered_map<string, vector<pair<string,int>>> table;

public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        table[key].push_back({value, timestamp});
    }
    
    string get(string key, int timestamp) {
        int l=0,r=table[key].size()-1;
        string res = "";
        while(l<=r){
            int m = (l+r)/2;

            if(table[key][m].second <= timestamp){
                res = table[key][m].first;
                l = m+1;
            }else{
                r = m-1;
            }
        }
        return res;
    }
};
