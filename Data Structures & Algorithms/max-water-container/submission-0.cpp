class Solution {
public:
    int maxArea(vector<int>& heights) {
        //max area = max(w)* max(h)
        int l=0;
        int r=heights.size()-1;
        int maxArea=0;
        while(l<r){
            int height=min(heights[l], heights[r]); //smallest bar as height- bcz water will spill at this height

            int width=(r-l);
            maxArea=max(maxArea, height*width);

            //find other possibilites, shrink window size 
            //if we shrink the width we want to maximise height
            if(heights[l]<heights[r]) l++; //skip smaller height bar, choose next
            else r--; 
        } 
        return maxArea;
    }
};
