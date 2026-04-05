class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        for(int l=0; l<prices.size();++l){
            for(int r=l+1;r<prices.size();++r){
                res = max(res, prices[r]-prices[l]);
            }
        }
        return res;
    }
};
