class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int sum=0;
        for(int i=n;i>=0;i=i-2)
        {
           sum+=min(nums[i],nums[i-1]);
        }
        return sum;
    }
};