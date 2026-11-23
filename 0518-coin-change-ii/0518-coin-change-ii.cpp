class Solution {
public:
   int solve(int amount, vector<int>& coins, int i , vector<vector<int>>&dp){
    if(amount==0) return 1;
    if(i==coins.size()) return 0;
    int pick =0;
    int not_pick=0;
    if(dp[i][amount]!=-1) return dp[i][amount];
    if(amount>=coins[i]){
        pick=solve(amount-coins[i],coins,i,dp);
    }
    not_pick=solve (amount, coins, i+1, dp);
    return dp[i][amount]= pick+not_pick;
   }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
       vector< vector<int>>dp(n+1, vector<int>(amount+1, -1));
        return solve(amount, coins, 0, dp);
    }
};