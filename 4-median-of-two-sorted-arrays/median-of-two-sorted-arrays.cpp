class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0,j=0;
        vector<int> m;
        while(i<n1 && j<n2)
        {
            if(nums1[i]<nums2[j]) m.push_back(nums1[i++]);
            else m.push_back(nums2[j++]);
        }
        while(i<n1)
        {
            m.push_back(nums1[i++]);
        }
        while(j<n2)
        {
            m.push_back(nums2[j++]);
        }
        int totalSize = m.size();
        if(totalSize % 2 ==0)
        {
            return (m[(totalSize/2) -1] + m[totalSize/2])/2.0;
        }
        else {
            return m[totalSize/2];
        }
        

    }
};