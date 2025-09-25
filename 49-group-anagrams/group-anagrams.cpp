class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>> ans;
       unordered_map<string,vector<string>> words;
       for(auto x : strs)
       {
        string word = x;
        sort(word.begin(),word.end());
        words[word].push_back(x);
       }
      for(auto x : words) ans.push_back(x.second);
       return ans;
    }
};