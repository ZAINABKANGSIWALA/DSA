class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        int maxlen=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            int count=1;
            while(i<nums.size() && nums[i-1]==nums[i]-1)
            {
                count++;
                i++;
                while (i<nums.size() && nums[i-1]==nums[i])i++;
            }
            maxlen=max(count,maxlen);
            
        }
        return maxlen;
    }
};