class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=0;
        int n=nums.size();
        if(n==1) return 0;
        for (int i =0;i<n;i++){
            mx=max(mx,nums[i]);
        }
        int ans=0;
        for (int i =0;i<n;i++){
           ans+=(mx-nums[i]);
        }
        return ans;
    }
};