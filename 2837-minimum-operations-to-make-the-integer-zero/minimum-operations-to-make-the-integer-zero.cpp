class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
       if (num1 == 0) return 0;

        for (int k = 1; k <= 60; k++) {
            long long S = num1 - static_cast<long long>(k) * num2;
            if (S < 0) continue;
            if (S < k) continue; // need at least k ones
            int bits = __builtin_popcountll(S);
            if (bits <= k && k <= S) {
                return k;
            }
        }
        return -1; 
    }
};