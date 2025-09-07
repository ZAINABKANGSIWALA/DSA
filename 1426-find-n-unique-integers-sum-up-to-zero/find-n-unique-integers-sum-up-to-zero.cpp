class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sum(n);
        if(n == 1) return {0};
        if(n % 2 == 0)
        {
            int j = 1;
            for(int i = 0; i < n; i++, j++)
            {
                sum[i++] = j;
                sum[i] = -j;
            }
        }
        else
        {
           sum[0] = 1;
           sum[1] = 2;
           sum[2] = -3;
           int j = 4;
           for(int i = 3; i < n; i++, j++)
           {
            sum[i++] = j;
            sum[i] = -j;
           }
        }
        return sum;
    }
};