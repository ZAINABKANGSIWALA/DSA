class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int ans = 0;
        int num = 0;
        int sign = 1;
        for(char c : s)
        {
            if(isdigit(c))
            num = num * 10 + (c-'0');
            else if(c=='+')
            {
                ans += num * sign;
                num =0;
                sign =1;
            }
            else if(c=='-')
            {
                ans += num * sign;
                num = 0;
                sign = -1;
            }
            else if(c =='(')
            {
                st.push(ans);
                st.push(sign);
                ans = 0;
                sign =1;

            }
            else if(c==')')
            {
                ans += num * sign;
                num =0;
                int prevSign = st.top(); st.pop();
                int prev = st.top(); st.pop();
                ans = prev + prevSign * ans;
            }

        }
        ans += num * sign;
        return ans;
    }
};