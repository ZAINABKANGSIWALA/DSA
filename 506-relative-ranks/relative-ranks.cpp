class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> sortedScore = score;
        sort(sortedScore.begin(),sortedScore.end(),greater<>());
        vector<string> medals={"Gold Medal","Silver Medal","Bronze Medal"};
        unordered_map<int,string> mp;
        for(int i=0;i<score.size();i++)
        { 
            if(i<3) mp[sortedScore[i]] = medals[i];
            else mp[sortedScore[i]]=to_string(i+1);
        }
        vector<string> result;
        for(int s : score)
        {
            result.push_back(mp[s]);
        }
        return result;
    }
};