class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        unordered_map<char,int> st;
        for(auto c : brokenLetters) st[c]++;
        int count = 0;
        bool broken = false;
        for(int i=0;i<=text.size();i++)
        {
             if (i < text.size() && text[i] != ' ') 
             {
            if(text[i]!=' ' && st.find(text[i])!=st.end()) broken = true;
             }
            else 
            {
                if(!broken) count++;
                broken = false;
            }

           
        }
        return count;
    }
};