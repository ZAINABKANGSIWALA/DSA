class Solution {
public:

    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int> mp;
        for(char elem : s) mp[elem]++;
        for(char elem : t) 
        {
        if(mp[elem]<=0) return false;
        mp[elem]--;
        }
        
        return true;
    }
};