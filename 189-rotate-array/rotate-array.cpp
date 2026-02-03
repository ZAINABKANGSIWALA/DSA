class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int h = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+h);
        reverse(nums.begin()+h,nums.end());
    }
};