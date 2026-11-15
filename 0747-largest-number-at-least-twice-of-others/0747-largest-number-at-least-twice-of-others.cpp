class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mx= INT_MIN;
        for (int i =0; i<nums.size(); i++){
            mx= max(mx, nums[i]);
        }
        int indx;
         for (int i =0; i<nums.size(); i++){
            if((nums[i]*2)>mx&&nums[i]!=mx)
            return -1;
           if(nums[i]==mx) indx= i; 
        }
        
        return indx;
    }
};