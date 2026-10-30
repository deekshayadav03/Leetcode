class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        int n =nums.size();
        if(n==1&&k==1) return double(nums[0]);
            int st=0;
            double sum=0;
        for (int i =0;i<n;i++){
                sum+=nums[i];
            if(i>=k-1){
               ans=max(ans,sum);
                sum=sum-nums[st];
                st++;
            }
        }
        return ans/k; 
    }
};