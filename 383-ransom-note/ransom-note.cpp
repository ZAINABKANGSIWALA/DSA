class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      unordered_map<char,int> mp;
      for(int c : magazine) mp[c]++;
      for(int c : ransomNote)
      {
        if(mp[c]==0) return false;
        mp[c]--;
      }
      return true;
    }
};