class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int elem = target-nums[i];
            if(mp.find(elem)!=mp.end()) return {i,mp[elem]};
            mp[nums[i]]=i;
        }
        return {};
    }
};