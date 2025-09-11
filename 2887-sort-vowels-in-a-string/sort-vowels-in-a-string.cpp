class Solution {
public:
    string sortVowels(string s) {
         vector<char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
        vector<int> freq(128, 0);

        // Count vowels
        for (char c : s) {
            if (isVowel(c)) {
                freq[c]++;
            }
        }

        int idx = 0;
        string result;
        result.reserve(s.size());

        for (char c : s) {
            if (isVowel(c)) {
                while (idx < vowels.size() && freq[vowels[idx]] == 0) {
                    idx++;
                }
                result.push_back(vowels[idx]);
                freq[vowels[idx]]--;
            } else {
                result.push_back(c);
            }
        }

        return result;
    }

private:
    bool isVowel(char c) {
        string v = "aeiouAEIOU";
        return v.find(c) != string::npos;
    
    }
};