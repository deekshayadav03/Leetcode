class Solution {
public:
void dfs(vector<vector<int>>& isConnected,  unordered_map<int,int>&visited,int i){
    visited[i]= 1;
    for (int j=0;j<isConnected.size();j++){
        if(isConnected[i][j]==1&&visited[j]==0)
        dfs(isConnected, visited, j);
    }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n =isConnected.size();
        int count=0;
        unordered_map<int,int>visited;
        for (int i =0;i<n;i++){
            if(visited[i]==0){
                dfs(isConnected,visited,i);
                count++;
            }
        }
        return count;
    }
};