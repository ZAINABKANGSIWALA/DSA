class Solution {
public:
    int mySqrt(int x) {
        if(x==1) return x;
       long long  left=0;
        long long right = x;
        long long ans =0;
        while(right >= left)
        {
            long long mid = (left + right)/2;
            if(mid * mid  == x) return mid;
            else if (mid*mid > x)
            {

                right = mid - 1;
            }
            else
            {
                ans = mid;
                left = mid+1;
                
            }

            
        }
        return ans;
    }
};