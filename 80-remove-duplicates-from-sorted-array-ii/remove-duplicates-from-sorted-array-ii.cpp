class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int i,k;
        for(i = 2, k = 2; i<nums.size();i++)
        {
            if(nums[i]!=nums[k-2]) nums[k++]=nums[i];
        }
        return k;
    }
};