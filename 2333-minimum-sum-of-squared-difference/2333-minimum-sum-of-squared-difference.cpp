class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long sum=0, mx=0;
        long long k= 1LL*k1+k2;
        vector<long long >diff(n);
        for (int i =0; i<n; i++){
            diff[i]= abs(nums1[i]-nums2[i]);
            sum+=diff[i];
            mx= max(mx, diff[i]);
        }
        if(sum<=k) return 0;
        long long low=0, high=mx;
        while(low<high){
            long long mid= low+(high-low)/2;
            long long ops=0;
            for(long long d:diff){
                if(d>mid) ops+=d-mid;
            }
            if(ops<=k) high=mid;
            else
            low=mid+1;
        } 
        long long used=0;
        for (long long &d:diff){
            if(d>low){
                used+=d-low;
                d=low;
            }
        }
        long long remaining= k-used;
        for (long long &d:diff){
            if( remaining==0) break;
            if(d==low&&d>0){
                d--;
                remaining--;
            }
        }
        long long ans=0;
        for (long long d:diff) ans+=d*d;
        return ans;
    }
};