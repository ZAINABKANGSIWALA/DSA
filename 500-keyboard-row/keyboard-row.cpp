class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        map<char, int > mp;
        string one= "qwertyuiopQWERTYUIOP";
        string two = "asdfghjklASDFGHJKL";
        string three="zxcvbnmZXCVBNM";

        for(char ch : one) mp[ch]=1;
        for(char ch : two) mp[ch]=2;
        for(char ch : three) mp[ch]=3;

        vector<string> v;
        bool flag;
        for(string & str : words)
        {
          int ind = mp[str[0]];
           flag = true;
            for(char &ch :str)
            {
                if(mp[ch]!=ind)
                {
                flag = false;
                break;
                }
            }
        if(flag) v.push_back(str);

        }
        return v;
    }
};