class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        int sum=0;
        int n=s.length()-1;
        for(char c : s)
        {
                count[c]++;  
                    
        }
        bool odd=false;
        for(auto &pair : count)
        {
            if(pair.second%2==0)
            {
                sum+=pair.second;
            }
            else 
            {
                sum+=pair.second-1;
                odd=true;
            }
        }
            if(odd) return ++sum;
        
          return sum;
    }
};