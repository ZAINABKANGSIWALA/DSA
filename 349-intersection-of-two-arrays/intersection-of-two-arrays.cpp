class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0 || nums2.size()==0) return {};
        unordered_set<int> st;
        vector<int> vt;
        for(int num : nums1) st.insert(num);
        for(int num:nums2)
        {
            if(st.find(num)!=st.end()) vt.push_back(num);
            st.erase(num);
        }
        return vt;
    }
};