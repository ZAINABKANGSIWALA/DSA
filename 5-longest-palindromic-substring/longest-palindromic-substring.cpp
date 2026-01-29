class Solution {
public:
    bool isPallindrome(const string &s, int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;

    }
    string longestPalindrome(string s) {
        int n= s.size();
        for(int len=n;len>=1;len--)
        {
            for(int i=0;i+len-1<n;i++)
            {
                int j=i+len-1;
                if(isPallindrome(s,i,j)) return s.substr(i,len);
            }

        }
        return "";
    }
};