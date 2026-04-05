class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r = *max_element(piles.begin(),piles.end());
        int res = r;
        while(l <= r){
            int m = (l+r)/2;
            long long eat_h = 0;
            for(int p : piles){eat_h += (p+m-1)/m;}
            if(eat_h <= h){
                r=m-1;
                res = m;
            }else{
                l=m+1;
            }
        }
        
        return res;
    }
};
