class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int count=1;
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(abs(nums[i+1]-nums[i])==1) c++;
            else if(nums[i+1]>nums[i] || nums[i+1]<nums[i]) c=1; 
            if(c>count) count=c;
        
        }
        return count;
    }
};