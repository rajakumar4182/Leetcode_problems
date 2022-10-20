class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxArea = INT_MIN;
        while(left<right){
            int w = right-left;
            int h = min(height[left] , height[right]);
            int area = h *w;
            if(area > maxArea){
                maxArea = area;
            }
            if(height[left] < height[right]) left++;
            else if(height[left] > height[right]) right--;
            else{
                left++,right--;
            }
        }
        
        return maxArea;
    }
};