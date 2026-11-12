class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1;
        int dec=1;
        int ans=1;
        for (int i =0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                inc=1;
                dec=1;
            }
            if(nums[i]<nums[i+1]){
                 inc++;
                 dec=1;
                 ans=max(ans,inc);
            } 
            if(nums[i]>nums[i+1]){
                dec++;
                inc=1;
                ans=max(ans,dec);
            }
        }
        return ans;
    }
};