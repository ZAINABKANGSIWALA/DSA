class Solution {
public:
    int countSegments(string s) {
        int segment=0;
        stringstream ss(s);
        string word;
        while(ss>>word) segment++;
        return segment;
    }
};