class Solution {
public:
//zainab
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int number=-1;
        int i=0;
        while(i<nums.size())
        {
          if(nums[i]!=i)
          {
           number = i;
           break;
          }
          i++;
        }
        if(number == -1) number=i;
        return number;
    }
};