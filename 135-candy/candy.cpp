class Solution {
public:
    int candy(vector<int>& ratings) {
            int n = ratings.size();
    if (n == 0) return 0;
    int candies = 1;  
    int inc = 1;      
    int dec = 0;      
    int peak = 1;     
    for (int i = 1; i < n; i++) {
        if (ratings[i] > ratings[i - 1]) {
            dec = 0;
            inc++;
            candies += inc;
            peak = inc;
        } else if (ratings[i] == ratings[i - 1]) {
            dec = 0;
            inc = 1;
            peak = 1;             
            candies += 1;
        } else {
            dec++;
            candies += dec;
            if (dec >= peak) {
                candies++;
            }
            inc = 1;            
        }
    }
    return candies;
    }
};