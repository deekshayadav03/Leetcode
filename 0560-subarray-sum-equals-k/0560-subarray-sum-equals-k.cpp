class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // vector<int>pref;
        // int ans=0;
        // int n = nums.size();
        // for (int i =0; i<nums.size();i++){
        //       if(i==0) pref.push_back(nums[i]);
        //       else{
        //         pref.push_back(nums[i]+pref[i-1]);
        //       }
        //       if(pref[i]==k) ans++;
        // }
        // for (int i =n-1;i>0;i--){
        //     for (int j=i;j>0;j--){
        //         if((pref[i]-pref[j-1])==k)
        //         ans++;
        //     }
        // }
        // return ans;

        int pre=0;
        int ans=0;
        unordered_map<int, int>mp;
        mp[0]=1;
       for (int i =0; i<nums.size();i++){
        pre+=nums[i];
        ans+=mp[pre-k];
        mp[pre]++;
       }
   return ans;
    }
};