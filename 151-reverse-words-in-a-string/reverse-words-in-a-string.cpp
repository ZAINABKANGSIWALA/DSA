class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        stringstream ss(s);
        string word;
        string res="";
        while(ss >> word) v.push_back(word);
        //reverse(v.begin(),v.end());
        for(int i=v.size()-1;i>=0;i--) 
        {
        res+=v[i];
        if(i!=0) res+=" ";
        }
        return res;
    }
};