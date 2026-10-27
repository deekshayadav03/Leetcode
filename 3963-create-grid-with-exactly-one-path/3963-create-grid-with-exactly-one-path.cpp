class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>ans;
        for (int i =0;i<m;i++){
            string st="";
               int j=0;
            if(i==0){
                  while(i==0&&j<n){
                  st+='.';
                  j++;
                 }
               }
           else{
                  while(j<n-1){
                  st+='#';
                  j++;
                }
            st+='.';
        }
        ans.push_back(st);
        }
        return ans;
    }
};