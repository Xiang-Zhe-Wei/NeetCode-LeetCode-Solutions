class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int l=0;
        for(int r=0;r<prices.size();++r){
            if(prices[l] > prices[r]){
                l = r;
                continue;
            }
            res = max(res, prices[r]-prices[l]);
        }

        return res;
    }
};
