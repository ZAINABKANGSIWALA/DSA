class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        string word;
        vector<string> words;
        while(ss >> word) words.push_back(word);
        if(words.size()!=pattern.size()) return false;
        unordered_map<char,string> mp;
        unordered_map<string,char> rev;
        for(int i=0;i<words.size();i++)
        {
            char ch=pattern[i];
            string curr=words[i];
            if(mp.find(ch)==mp.end() && rev.find(curr)==rev.end())
            {
                mp[ch]=curr;
                rev[curr]=ch;
            }
            else
            {
                if(mp[ch]!=curr || rev[curr]!=ch) return false;
            }
        }
        return true;
    }
};