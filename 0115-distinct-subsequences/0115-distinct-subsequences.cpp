class Solution {
public:
    int solve (string &s, string &t, int i, int j, vector<vector<unsigned long long >>&dp){
        if(j==t.length()) return 1;
        if(i==s.length()) return 0;
        int pick=0;
        int not_pick=0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            pick=solve(s,t,i+1,j+1,dp);
        }
        not_pick=solve(s,t,i+1,j,dp);
        return dp[i][j]=pick+not_pick;

    }
    int numDistinct(string s, string t) {
        int m= s.length();
        int n= t.length();
        vector<vector<unsigned long long >>dp(m+1, vector<unsigned long long >(n+1,-1));

        return solve (s,t,0,0,dp);
    }
};