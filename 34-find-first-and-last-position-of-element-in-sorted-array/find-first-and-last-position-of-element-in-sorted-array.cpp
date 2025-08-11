class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> elem{-1,-1};
        int left =0;
        int right =nums.size()-1;
        if(nums.size()==1 && target == nums[0]) 
        {
            elem[0] = 0;
            elem[1]=0;
            return elem;
        }
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                elem[0]=mid;
                right = mid-1;
            } 
           else if(target > nums[mid]) left = mid+1;
           else right=mid-1;
        }
         left =0;
         right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==target)
            {
                elem[1]=mid;
                left = mid+1;
            } 
           else if(target > nums[mid]) left = mid+1;
           else right=mid-1;
        }
        return elem;
    }
};