class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int e=0;
        int f=0;
    
        int count =0;
        while(e<nums.size())
        {
            if(nums[e]!=val) nums[f++] =nums[e++];
            else e++;

        }
        return f;

    }
};