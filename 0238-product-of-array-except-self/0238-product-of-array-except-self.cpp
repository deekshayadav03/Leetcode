class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int n = nums.size();
        vector<int>v(n,0);
        int cnt=0;
        for (int i =0; i< n;i++){
            if(nums[i]==0){
                cnt++;
                continue;
            } 
            product*=nums[i];
        }
        if(cnt>1) return v;
        if(cnt==0){
        for (int i =0; i<n;i++)
               v[i]= product/nums[i];
        }
        else {
             for (int i =0; i<n;i++){
                if(nums[i]==0){ 
                    v[i]=product;
                    break;}
             }
        }
        return v;
    }
};