class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int e,f;
       for(e=0,f=1;f<nums.size();f++)
       {
        if(nums[e]!=nums[f]) nums[++e]=nums[f];
       }
      
       return e+1;
    }
};