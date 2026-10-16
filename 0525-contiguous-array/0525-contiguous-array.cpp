class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n =nums.size();
        // for (int i=0;i<n;i++){
        //     if(i==0) continue;
        //     else{
        //         nums[i]=nums[i]+nums[i-1];
        //     }
        // }
        //   int dupe=0;
        //   int dff=0;
        //   for (int i =1;i<n;i++){
        //     if(nums[i]==nums[i-1]){
        //         dupe++;
        //     }
        //     else{
        //         dff++;
        //     }
        //   }
        //   int mn =min(dupe,dff);
        //   return 2*mn;
        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=-1;
        for (int i =0; i<n;i++){
            if(nums[i]==0) sum-=1;
            if(nums[i]==1)sum+=1;
            if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
        return ans;
    }

};