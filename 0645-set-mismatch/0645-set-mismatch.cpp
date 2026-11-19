class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<bool>visited(10002, 0);
        int n = nums.size();
        int dupe=0;
        for (int i =0; i<n; i++){
            if(visited[nums[i]]){
                dupe= nums[i];
                break;
            }
            visited[nums[i]]= true;
        }
        int sum=0;
        for (int i =0; i<n; i++){
           sum=sum+nums[i];;
         }
         int add= n*(n+1)/2;
         int missing= (add+dupe)-sum;
      return {dupe, missing};
    }
};