class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        stringstream ss2(version2);
        char dot;
        int n1, n2;
        while(ss1.good() || ss2.good())
        {
            if(ss1>>n1)
            {
                if(ss1.peek()=='.') ss1>>dot;
            }
            else n1=0;
            if(ss2>>n2)
            {
                if(ss2.peek()=='.') ss2>>dot;
            }else n2=0;

            if(n1!=n2) return n1>n2 ? 1 : -1;
        }
        return 0;
    }
};