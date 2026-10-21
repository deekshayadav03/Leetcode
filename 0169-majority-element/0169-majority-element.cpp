class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // vector<int>result;
        // vector<int>mx;
        // int mx=INT_MIN;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for (int i =0; i<n;){
            int count=0;
            int j =i;
            while(j<n && nums[i]== nums[j]){
                j++;
                count++;
            if(count>n/2) return nums[i];
            }
                i=j;
        }
        // int maxindex=0;
        // for (int i =0; i<mx.size();i++){
        //     if (mx[i]>mx[maxindex]){
        //         maxindex=i;
        //     }
        // }
        // if( n/2<mx[maxindex]){
        //     return result[maxindex];
        // }
        // else if (n== 1)
        // return nums[0];
        return -1;
    }
};