class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int e, f;
       for(e=0,f=0; f<nums.size();f++)
       {
        if(nums[f]!=val) nums[e++]=nums[f];
       }
       return e;
    }
};