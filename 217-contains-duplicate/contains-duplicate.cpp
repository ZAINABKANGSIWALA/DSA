class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num : nums) mp[num]++;
        for(int elem : nums) 
        {
            if(mp[elem]>1) return true;
        }
        return false;
    }
};