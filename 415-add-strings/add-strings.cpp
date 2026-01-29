class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int carry=0;
        int i=num1.length()-1;
        int j=num2.length()-1;
        while(i>=0 || j>=0)
        {
            int sum=carry;
            if(i>=0) sum+=num1[i--]-'0';
            if(j>=0) sum+=num2[j--]-'0';
            carry = (sum>9) ? 1 : 0;
            if(sum>9) sum=sum%10;
            res= to_string(sum)+res;
        }
        if(carry) res=to_string(carry)+res;
        return res;
    }
};