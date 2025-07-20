class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     for(int i=nums1.size()-1,j=0; j<nums2.size(); i--,j++)
     {
        if(nums1[i]==0) nums1[i]=nums2[j];

     }  
     sort(nums1.begin(),nums1.end()); 
    }
};