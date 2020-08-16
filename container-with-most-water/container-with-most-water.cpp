class Solution {
public:
    int maxArea(vector<int>& height) {
        int end = height.size()-1;
        int M=0;
        int l=0;
        int r=end;
        bool direction = height[0] < height[end];
        while(l<r){
            // l to r
            int area = min(height[l],height[r])*(r-l);
            if(area > M) M = area;
            
            if(direction){
                if(l+1<r && height[l+1] > height[r]){
                    direction = false;
                }
                l++;                    
            } else { // r to l
                if(l<r-1 && height[l] < height[r-1]){
                    direction = true;
                }
                r--;
            }
            
        }
        
        return M;
    }
};