class Solution {
public:
    bool isPalindrome(const string &s, int l,int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n =s.size();
        for(int len = n; len>=1 ; len--)
        {
            for(int i=0;i+len-1<n;i++)
            {
                int j=i+len-1;
                if(isPalindrome(s,i,j)) return s.substr(i,len);
            }
        }
        return "";
    }
};