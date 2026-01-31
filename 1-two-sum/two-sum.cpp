class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++)
       {
        int elem = target - nums[i];
        if(mp.find(elem)!=mp.end()) return {i,mp[elem]};
        mp[nums[i]] = i;
       }
       return {};
    }
    /* 1. Initialize an empty array.
        2. Traverse the array.
        3. Calculate the complement for the current number.
        4. If complement exists in map, return indices.
        5. Else store the value in the map.
        */
};