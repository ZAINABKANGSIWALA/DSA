class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp{
        {'I',1},
        {'V',5},
        {'X',10},          
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
        }; 
        int total = 0;
        int i;
        for(i=0;i<s.size();i++)
        {
         int current = mp[s[i]];
         if(current < mp[s[i+1]]) total -= current;
         else total += current;
        }
        total += mp[s[i]];
        return total;
    }
};