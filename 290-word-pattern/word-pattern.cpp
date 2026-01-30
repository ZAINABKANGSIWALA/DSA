class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string word;
        stringstream ss(s);
        vector<string> words;
        while(ss>>word) words.push_back(word);
        if(words.size()!=pattern.size()) return false;
        unordered_map<char,string> charToWord;
        unordered_map<string,char> wordToChar;
        for(int i=0;i<words.size();i++)
        {
            char ch = pattern[i];
            word=words[i];
            if(charToWord.find(ch)==charToWord.end() && wordToChar.find(word)==wordToChar.end()) 
            {
                charToWord[ch]=word;
                wordToChar[word]=ch;
            }
            else 
            {
                if(charToWord[ch]!=word || wordToChar[word]!=ch) return false;
            }
        }
        return true;
        

    }
};