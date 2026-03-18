class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1) return false;
        stack<char> stk;
        char ch;
        for(char c : s)
        {
            if(c=='(' || c=='[' || c=='{')
            {
                stk.push(c);
            }
            else
            {
               if(!stk.empty())
               {
                 ch=stk.top();
                if((ch=='(' && c!=')') || (ch=='[' && c!=']') || (ch=='{' && c!='}'))
                {
                    return false;
                }
               }
               else
               {
                 return false;
               }
                stk.pop();
            }

        }
        return (stk.empty()) ? true : false;
    }
};