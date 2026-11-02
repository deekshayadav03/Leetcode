class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int ans=INT_MAX;
        int n =nums.size();
        sort(nums.begin(),nums.end());
           int val =nums[n/2];
           int req=0;
            for (int i =0;i<n;i++){
                 req+=abs(val-nums[i]);
            }
            ans=req;
            if(n%2==0) {
                int val =nums[n/2-1];
                 req=0;
                 for (int i =0;i<n;i++){
                 req+=abs(val-nums[i]);
            }
              ans=min(ans,req);
            }
        
        // for (int i=0;i<n;i++){
        //     int val =nums[i];
        //     int req=0;
        //     for (int j=0;j<n;j++){
                
        //         req+=abs(val-nums[j]);
        //     }
        //     ans=min(req,ans);
        // }
        return ans;
    }
};