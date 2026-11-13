class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m =matrix[0].size();
        int startrow=0;
        int startcol=0; 
        int endrow=n-1;
        int endcol=m-1;
            
            for (int i =startcol; i<=endcol; i++){
                for(int j =startrow; j<=endrow; j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
                      startrow++;
                startcol++;
            }
            for(int i =0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
            }
            
            // for(int i =startcol; i<=endcol; i++){
            //     for(int j=startrow; j<=endrow;j++){
            //       matrix[i][j]=matrix[j][i];
            //        cout<<matrix[i][j];
            //         count++;
            //         startrow++;
            //     }
                
            //     startcol++;
            // }
       
    
    }
};