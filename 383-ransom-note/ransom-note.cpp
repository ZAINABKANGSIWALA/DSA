class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    vector<int> freq(26,0);
    for(int c:magazine) freq[c-'a']++;
    for(int c:ransomNote)
    {
        if(freq[c-'a']==0) return false;
        freq[c-'a']--;
    }
    return true;
    }
};