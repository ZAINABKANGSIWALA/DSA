class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_map<char ,int> charIndex;
      int maxlen = 0;
      int left =0;
      for(int right =0 ;right< s.size();right++)
      {
        if(charIndex.find(s[right])!=charIndex.end())
        left = max(charIndex[s[right]]+1, left);
       
      charIndex[s[right]] =right;
      maxlen = max(maxlen, right-left+1);
      }
      return maxlen;
    }
};