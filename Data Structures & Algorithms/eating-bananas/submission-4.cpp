class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int k = 1;
        while(true){
            long long eat_h = 0;
            for(int p : piles){
                eat_h += (p+k-1)/k;
            }
            if(eat_h <= h) break;
            ++k;
        }
        return k;
    }
};
