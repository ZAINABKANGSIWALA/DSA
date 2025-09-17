class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(),nums.end());
        int maxlen=0;
        for(int num : st)
        {
            if(st.find(num-1)==st.end())
            {
                int curr=num;
                int currlen=1;
                while(st.find(curr+1)!=st.end())
                {
                    curr++;
                    currlen++;
                }
                maxlen=max(maxlen,currlen);
            }
        }
        return maxlen;
    }
};