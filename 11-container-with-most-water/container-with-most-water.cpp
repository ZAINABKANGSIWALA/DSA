class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1;
        int l,h;
        int maxHeight=INT_MIN;
        while(left<right)
        {
            l=right-left;
            h=min(height[right],height[left]);
            int result = l*h;
            maxHeight=max(maxHeight,result);
            if(height[left]<height[right]) left++;
            else right--;            
        }
        return maxHeight;
    }
};