class Solution {
    public:
        int maxArea(vector<int>& height) {
            int maxA = 0;
            int l=0;
            int r=height.size()-1;
    
            while(r>l){
                int area = min(height[l],height[r])*(r-l);
                if(area>maxA){
                    maxA = area;
                }
                if(height[l]>height[r]){
                    r--;
                }
                else{
                    l++;
                }
            }
            return maxA;
        }
    };