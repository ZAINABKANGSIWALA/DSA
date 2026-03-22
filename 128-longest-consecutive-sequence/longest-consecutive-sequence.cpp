class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen=0;
        for(int num : s)
        {
            if(s.find(num-1)==s.end())
            {
                int count =1;
                int curr=num;
                while(s.find(curr+1)!=s.end())
                {
                    count++;
                    curr++;
                }
                maxlen=max(count, maxlen);
            }
        }
        return maxlen;
    }
};