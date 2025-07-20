class Solution {
public:
    void sortColors(vector<int>& nums) {
       unordered_map<int,int> count;
       for(auto it : nums)
       {
        count[it]++; 
       }
       int e=0;
    for(int i=0;i<3;i++)
    {
        while(count[i]>0)
        {
            nums[e++]=i;

            count[i]--;

        }
        

    }       
    }
};