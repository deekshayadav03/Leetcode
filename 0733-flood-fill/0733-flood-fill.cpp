class Solution {
public:
  void solve (vector<vector<int>>& image, int sr, int sc, int color,int r, int c,vector<vector<int>> &ans){
    if(r<0||c<0||r==image.size()||c==image[0].size()||image[r][c]!=image[sr][sc]||
      ans[r][c]==color) return;
     ans[r][c]= color;
     solve(image,sr,sc,color,r+1,c,ans);
     solve(image,sr,sc,color,r-1,c,ans);
     solve(image,sr,sc,color,r,c+1,ans);
     solve(image,sr,sc,color,r,c-1,ans);

  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans;
        int r=sr;
        ans= image;
        int c=sc;
        solve(image,sr,sc,color,r,c,ans);
        return ans;
    }
};