class Solution {
public:
void dfs(vector<vector<int>>& grid, vector<vector<int>>&visited,int i, int j, int &val){
    if(i<0||j<0||i==grid.size()||j==grid[0].size()||visited[i][j]==1||grid[i][j]==0) 
        return ;
        val++;
    visited[i][j]=1;
    
    dfs(grid, visited, i+1,j,val);
    dfs(grid, visited, i-1,j,val);
    dfs(grid, visited, i,j+1,val);
    dfs(grid, visited, i,j-1,val);
}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n =grid.size();
        int m = grid[0].size();
       vector<vector<int>>visited(n,vector<int>(m,0));
        int ans=0;
        for (int i =0;i<n;i++){
         for (int j=0;j<m;j++){
            int val=0;
            if(visited[i][j]==0&&grid[i][j]==1){
                dfs(grid,visited, i,j,val);
            }
            ans= max(ans,val);
         }
        }
        return ans;
    }
};