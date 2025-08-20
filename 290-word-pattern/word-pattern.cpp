class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_map<string, char> rev;
        int i=0;
        for(char ch : pattern)
        {
            string curr="";
            while(i<s.size() && s[i]!=' ') curr+=s[i++];
            if(i<s.size() && s[i]==' ') i++;
            if(curr == "") return false;
            if(mp.find(ch)==mp.end() && rev.find(curr)==rev.end())
            {
                mp[ch]=curr;
                rev[curr]=ch;
            }
            else 
            {
                if(mp.find(ch)==mp.end() || mp[ch]!=curr) return false;
                if(rev.find(curr)==rev.end() || rev[curr]!=ch) return false;
            }
        }
        if(i<s.size()) return false;
        return true;
    }
};