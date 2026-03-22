class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1) return nums.size();
        unordered_set<int> s(nums.begin(),nums.end());
        int maxlen=0;
        int count;
        for(int num : s)
        {
            if(s.find(num-1)==s.end())
            {
                int curr = num;
                 count =1;
                while(s.find(curr+1)!=s.end())
                {
                    count++;
                    curr++;
                }
                 maxlen=max(maxlen,count);
            }
           
        }
        return maxlen;
    }

};