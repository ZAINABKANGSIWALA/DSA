class Solution {
public:
    int maxArea(vector<int>& height) {  
       int left = 0, right = height.size()-1;
       int maximum = 0;
       while(left < right)
       {
        int l = right - left;
        int h = min(height[left],height[right]);
        int res = l*h;
        maximum = max(maximum, res);
        if(height[left] < height[right]) left++;
        else right--;
       }
       return maximum;
    }
};