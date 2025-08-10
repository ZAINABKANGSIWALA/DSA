class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans =0;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]-nums[i-1]>0) return i;
           else if(nums[i]-nums[i-1]==1) return i;
        }
        return ans;
    }
};