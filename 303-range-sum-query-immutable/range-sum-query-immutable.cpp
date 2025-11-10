class NumArray {
public:
    vector<int> storing;
    NumArray(vector<int>& nums) {
        storing = nums;
        for(int i=1;i<nums.size();i++) storing[i]+=storing[i-1];
    }
    
    int sumRange(int left, int right) {
        if(left==0) return storing[right];
        return storing[right]-storing[left-1];
        
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */