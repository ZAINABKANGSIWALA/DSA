class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sum(n);
        sum[0] = n*(1-n)/2;
        for(int i  = 1; i < n; i++)  sum[i] = i;
        return sum;
    }
};