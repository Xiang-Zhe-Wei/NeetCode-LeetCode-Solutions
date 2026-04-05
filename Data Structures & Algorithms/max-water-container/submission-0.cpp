class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> bucket;
        int l=0, r=heights.size()-1;
        while(l < r){
            int w=r-l;
            int h=min(heights[l], heights[r]);
            int total = w*h;
            bucket.push_back(total);
            if(heights[l] > heights[r]){
                --r;
            }else{
                ++l;
            }

        }
        int water_max = 0;
        for(int water : bucket){
            if(water > water_max){
                water_max = water;
            }
        }
        return water_max;
    }
};
