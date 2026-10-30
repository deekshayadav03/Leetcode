class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
         int ans=0;
         int n = arr.size();
         int st=0;
         int sum=0;
         for (int i=0;i<n;i++){
           sum+=arr[i];
           if(i>=k-1){
            if(sum/k>=threshold) ans++;
            sum=sum-arr[st];
            st++;
           }
         }
         return ans;
    }
};