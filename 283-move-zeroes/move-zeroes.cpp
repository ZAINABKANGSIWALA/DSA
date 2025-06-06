class Solution {
public:
//Zainab
    void moveZeroes(vector<int>& nums) {
        int count=0;
        int e=0;
       for(int i=0;i<nums.size();i++)
       {
        if(nums[i]!=0) 
        {
            nums[e++]=nums[i];
       }
       else count++;
       }
       while(count>0 && e<nums.size())
       {
        nums[e++]=0;
        count--;
       }

    }
};