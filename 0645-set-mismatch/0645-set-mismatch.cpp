class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int, int>mp;
        int dupe=0;
        for (int i =0; i<nums.size(); i++){
            if(mp[nums[i]]==1){
                dupe= nums[i];
                break;
            }
            mp[nums[i]]++;
        }
        int sum=0;
        for (int i =1; i<=nums.size(); i++){
        sum+=i;
         }
      for (int i =0; i<nums.size(); i++){
        sum=sum-nums[i];;
         }
       sum= sum+dupe;
      return {dupe, sum};
    }
};