class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(char ch : s) mp[ch]++;
        int maxV=0,maxC=0;
        string vowels="aeiou";
        for(auto &p : mp)
        {
            char ch = p.first;
            int count = p.second;
            if(vowels.find(ch)!=string::npos) maxV=max(maxV,count);
            else maxC=max(maxC,count);
        }
        return maxC+maxV;
       
    }
};