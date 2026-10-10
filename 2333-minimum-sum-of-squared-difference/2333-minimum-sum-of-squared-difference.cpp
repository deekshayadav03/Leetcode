class Solution {
public:
long long  sqdiff(vector<int>& nums1, vector<int>& nums2,vector<int>&diff){
    long long sum=0;
    for(int i=0;i<nums1.size();i++){
        int d=abs(nums1[i]-nums2[i]);
        diff.push_back(d);
    sum+=1LL*d*d;
    }
    return sum;
}

    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int>diff;
        if(k1==0 && k2==0){
            return sqdiff(nums1,nums2,diff);
        }
      
       int n1=nums1.size();
       int n2=nums2.size();
      sqdiff(nums1,nums2,diff);
       long long k = 1LL * k1 + k2;
   long long  total=0;
    for(int& i:diff){
        total+= i;
    }
    if(total<=k){
        return 0;
    }
    int n=diff.size();
    int index=n-1;
  int maxi = *max_element(diff.begin(), diff.end());
 vector<long long> freq(maxi + 1, 0);
  for(int d:diff){
    freq[d]++;
  }
    for(int i=maxi;i>0 && k>0;i--){
  long long take=min(k,freq[i]);
  freq[i]-=take;
  freq[i-1]+=take;
  k-=take;
 }
    
    long long  ans=0;
    for(int i=1;i<=maxi;i++){
        ans+=1LL *i*i*freq[i];
    }
            return ans;
        
    }
};