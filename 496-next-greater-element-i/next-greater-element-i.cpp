class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
     vector<int> ans;
     for(int i=0;i<nums1.size();i++)
     {
        int curr=nums1[i];
        int nextGreater=-1;
        bool flag = false;
        for(int j=0;j<nums2.size();j++)
        {
            if(curr==nums2[j]) 
            {
            flag=true;
            
            }
            if(flag && nums2[j]>curr) 
            {
                nextGreater=nums2[j]; 
                break;
            }
        }
        ans.push_back(nextGreater);
     }   
     return ans;
    }
};