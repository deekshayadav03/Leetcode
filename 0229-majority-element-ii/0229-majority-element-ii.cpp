class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n =nums.size();
        vector<int>ans;
        for (int i =0;i<nums.size();){
            int count=1;
            int j =i+1;
            while(j<nums.size()&&nums[i]==nums[j]){
                count++;
                j++;
            }
            if(count>n/3) {
                ans.push_back(nums[i]);
            }
            i=j;
        }
        return ans;
    }
};