class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> mp;
     int elem=0;
     for(int i=0;i<nums.size();i++)
     {
        mp[nums[i]]=i;
     }   
    for(int i=0;i<=nums.size();i++)
    {
        elem=target-nums[i];
        if(mp.find(elem)!=mp.end() && mp[elem]!=i) return {i,mp[elem]};
    }
    return {};
    }
};