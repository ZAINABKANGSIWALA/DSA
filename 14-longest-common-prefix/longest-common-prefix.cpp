class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs.back();
        int i=0;
        string result = "";
        while(i<first.size() && i<last.size())
        {
            if(first[i]==last[i])
            {
                result+=first[i];
                i++;
            }
            else break;
            
        }
        return result;
    }
};