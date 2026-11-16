class Solution {
public:

    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char elem : s) mp[elem]++;
        for(char elem : t) 
        {
        if(mp[elem]<=0) return false;
        mp[elem]--;
        }
        for(auto elem : mp)
        {
            if(elem.second>=1) return false;
        }
        return true;
    }
};