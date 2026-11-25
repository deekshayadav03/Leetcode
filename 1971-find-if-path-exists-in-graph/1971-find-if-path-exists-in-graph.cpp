class Solution {
public:
bool solve( vector<vector<int>>& edges, int source, int destination,int &path, vector<int>&visited){
    visited[path]=1;
    if(path==destination) return true;
    for (auto it:edges[path]){
        if(!visited[it]){
       if(solve(edges, source, destination ,it,visited))
       return true;
        }
    }
   return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>visited(n,0);
        int path= source;
        vector<vector<int>>adj(n);
        for (auto it:edges){
            int u=it[0];
            int v= it[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        return solve(adj, source, destination ,path,visited);
    }
};