class Solution {
public:
    int minSwaps(vector<int>& nums) {
     vector<tuple<int, int, int>> v;
        int n =nums.size();
        for (int i=0;i<n;i++){
            int val= nums[i];
            int sum=0;
            while(val>0){
               sum+=val%10;
               val=val/10;
            }
            v.push_back({sum,nums[i],i});
        }
      sort(v.begin(),v.end());
      int swap=0;
      vector<bool>visited(n,false);
      for (int i =0;i<n;i++){
         if(visited[i]||get<2>(v[i])==i) continue;
          int cycle=0;
          int j=i;
          while(!visited[j]){
            visited[j]=true;
            j=get<2>(v[j]);
            cycle++;
          }
          swap+=cycle-1;

      }
      return swap;
    }
};