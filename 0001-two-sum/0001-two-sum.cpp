class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

//        for(int i =0; i<nums.size(); i++){
          
//             for(int j =i+1; j<nums.size(); j++){
//                 if((nums[i]+nums[j])==target){
//                      return {i, j};
//                  }
//              }
//          }
//    return {};
    //  unordered_map<int, int>mp;
    //  for (int x=0; x<nums.size(); x++){
    //    int need= target-nums[x];
    //    if(mp.find(need)!=mp.end()){
    //     return {mp[need],x};
    //    }
    //    mp[nums[x]]=x;
    //  }
    //    return{}; 
 vector<int>num = nums;
      sort(nums.begin(), nums.end());
      int l , r;
    int lft=0;
    int rgt=nums.size()-1;
    while(lft<rgt) {
        int sum = nums[lft]+nums[rgt];
        if(sum==target) {
            l= lft;
            r= rgt;
            break;
        }
        else if (sum>target) rgt--;
        else 
        lft++;
    }
    vector<int>ans;
    for (int i = 0; i<nums.size(); i++){
        if(nums[l]==num[i]||nums[r]==num[i]){
        ans.push_back(i);
        }
    }
    return ans;;
       }
};