// Using Dyanamic Programming Top-Down and Bottom-Up Aprroach

//APPROACH 1 TOP-DOWN SOLVE (MEMOIZATION)
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> DP(n, -1);
        DP[0] = 1;
        DP[1] = 1;

        for (int i = 2; i < n; i++) {
            DP[i] = DP[i - 1] + DP[i - 2];
        }

        return DP;
    }
};

//APPROACH 2 BOTTOM-UP SOLVE (TABULATION)  
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    // Recursive function with memoization
    long long findFibb(int n, vector<long long>& dp) {
        if (n == 0 || n == 1) {
            return n;
        }
        
        if (dp[n] != -1) {
            return dp[n];
        }
        
        dp[n] = findFibb(n - 1, dp) + findFibb(n - 2, dp);
        return dp[n];
    }
    
    vector<long long> printFibb(int n) {
        vector<long long> ans;
        vector<long long> dp(n + 1, -1);
        
        // Calculate Fibonacci numbers using top-down approach
        for (int i = 0; i <= n; i++) {
            dp[i] = findFibb(i, dp);
        }
        
        ans = vector<long long>(dp.begin() + 1, dp.end());
        return ans;
    }
};
