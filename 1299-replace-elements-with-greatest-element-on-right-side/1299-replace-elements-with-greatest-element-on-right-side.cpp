class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int n= arr.size();
         vector<int> ans(n,0);
         int mx=INT_MIN;
         for(int i=n-1;i>=0;i--){
             if(i==n-1) {
               ans[i]=-1;
                mx= max(mx,arr[i]);
                }
             else{
               ans[i]=mx;
                mx=max(mx,arr[i]);
             }
         }
        
         return ans;
    }
};