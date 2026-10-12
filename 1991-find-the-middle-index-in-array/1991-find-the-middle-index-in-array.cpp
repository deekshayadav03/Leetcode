class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for (auto i:nums){
            sum+=i;
        }
        int lft=0;
        for (int i =0; i<nums.size();i++){
            int rgt= sum-lft-nums[i];
            if(rgt==lft) return i;
            lft+=nums[i];
        }
        return -1;
    }
};