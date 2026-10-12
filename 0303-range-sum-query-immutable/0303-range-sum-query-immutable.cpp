class NumArray {
public:
   vector<int>nums;
    NumArray(vector<int>& nums) {
        this->nums= nums;
        for (int i =0; i< this->nums.size();i++){
            if(i==0)  this->nums[i]= this->nums[i];
            else {
                 this->nums[i]= this->nums[i]+ this->nums[i-1];
            }
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
        return  this->nums[right];
        else {
            return   this->nums[right]- this->nums[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */