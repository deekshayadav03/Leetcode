class Solution {
public:
int solve (string &w1, string &w2, int i, int j,vector<vector<int>>&dp ){
    if(j==w2.length()) return w1.length()-i;
    if(i==w1.length()) return w2.length()-j;
    if(dp[i][j] != -1) 
            return dp[i][j];
    if(w1[i]==w2[j]){
        return dp[i][j]=solve(w1,w2,i+1,j+1,dp);
    }
     int insert= solve(w1,w2, i,j+1,dp);
     int del= solve(w1,w2, i+1,j,dp);
     int replace=solve(w1,w2,i+1,j+1,dp);
     return dp[i][j]=1+min({insert,del,replace});
}
    int minDistance(string word1, string word2) {
        int m= word1.length();
        int n = word2.length();
        vector<vector<int >>dp(m+1, vector<int>(n+1,-1));
        return solve (word1,word2, 0,0,dp);
    }
};