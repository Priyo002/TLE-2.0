class Solution {
public:

    int rec(int n, vector<int>&dp) {
        if (n == 0) return 0;
        else if (n == 1 || n == 2) return 1;
        if (dp[n] != -1) return dp[n];
        dp[n] = rec(n - 1, dp) + rec(n - 2, dp) + rec(n - 3, dp);
        return dp[n];
    }
    int tribonacci(int n) {
        vector<int> dp(n + 1, -1);
        return rec(n, dp);
    }
};