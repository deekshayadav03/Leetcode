class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        const long long mod= 1e9+7;
        vector<int>bit(31,0);
        for (int num:nums){
            for (int i =0; i<31;i++){
                if(num&(1<<i)) bit[i]++;
            }
        }
        long long ans=0;
        for (int i =0; i<k;i++){
            long long num=0;
            for(int b =0; b<31;b++){
                if(bit[b]>0){
                    num|=(1LL<<b);
                    bit[b]--;
                }
            }
            ans=(ans+num*num)%mod;
        }
        return ans;
    }
};