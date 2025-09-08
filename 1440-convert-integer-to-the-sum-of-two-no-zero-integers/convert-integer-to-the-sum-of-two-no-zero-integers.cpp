class Solution {
public:
    bool check(int x)
    {
       while(x > 0)
       {
        if(x % 10 == 0) return false;
        x = x / 10;
       }
       return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> num(2);
        for(int a = 1 ;a < n; a++)
        {
            int b = n - a;
            if(check(b) && check(a)) return{a,b};
        }
        return {};
    
    }
};