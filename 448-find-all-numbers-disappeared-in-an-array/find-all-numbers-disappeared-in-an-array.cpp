class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
       unordered_set<int> st;
       vector<int> missedNum;
       for(int num : nums) st.insert(num);
       for(int i=1; i <= nums.size(); i++)
       {
        if(st.find(i)==st.end()) missedNum.push_back(i);
       }
       return missedNum;
    }
};