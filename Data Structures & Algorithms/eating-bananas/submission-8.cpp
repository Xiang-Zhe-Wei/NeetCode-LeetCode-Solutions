class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int min_k = 1;
        while(true){

            long long eat_h = 0;
            for(int p : piles){
                eat_h += (p + min_k - 1) / min_k;
            }
            if(eat_h <= h){
                return min_k;
            } 
            min_k++;  
        }      
    }
};
