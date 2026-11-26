class Solution {
public:
     void dfs (vector<vector<char>>& grid,int i, int j, vector<vector<int>>&visited){
        if(i<0||j<0||i==grid.size()||j==grid[0].size()||visited[i][j]==1||grid[i][j]=='0') return;
        visited[i][j]=1;
        dfs(grid,i-1,j,visited);
        dfs(grid,i+1,j,visited);
        dfs(grid,i,j+1,visited);
        dfs(grid,i,j-1,visited);
     }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count=0;
        vector<vector<int>>visited(n,vector<int>(m,0));
      for (int i =0;i<n;i++){
        for (int j=0;j<m;j++){
            if(grid[i][j]=='1'&& visited[i][j]!=1){
                count++;
                dfs(grid,i,j,visited);
            }
        }
      }
      return count;
    }
};