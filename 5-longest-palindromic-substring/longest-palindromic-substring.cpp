class Solution {
public:
    string longestPalindrome(string s) {
        string t="#";
        for(char c : s)
        {
            t+=c;
            t+='#';
        }
        int center=0, right=0;
        int n=t.size();
        vector<int> p(n,0);
        for(int i=0;i<n;i++)
        {
            int mirror=2*center-i;
            if(i<right)
            {
                p[i]=min(p[mirror],right-i);
            }
            while(i+p[i]+1<n && i-p[i]-1 >=0 && t[i+p[i]+1]==t[i-p[i]-1]) p[i]++;
            if(p[i]+i > right)
            {
                center=i;
                right=i+p[i];
            }
        }

        int maxlen=0, centerIdx=0;
        for(int i=0;i<n;i++)
        {
            if(p[i]>maxlen)
            {
                maxlen=p[i];
                centerIdx=i;
            }

        }
        int start=(centerIdx-maxlen)/2;
        return s.substr(start,maxlen);
    }
};