class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majorityCondi=nums.size()/2;
        unordered_map<int,int> mp;
        for(int num:nums)
        {
             mp[num]++;
             if(mp[num]>majorityCondi) return num;
        }
        return 0;
    }
};