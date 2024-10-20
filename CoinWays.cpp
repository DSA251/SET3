#include <bits/stdc++.h>
using namespace std;


int countWaysRec(vector<int> &coins, int n, int sum, 
                      vector<vector<int>> &memo)
{
    
    if (sum == 0)
        return memo[n][sum] = 1;

    
    if (n == 0 || sum < 0)
        return 0;

    
    if (memo[n][sum] != -1)
        return memo[n][sum];

    
    return memo[n][sum] = countWaysRec(coins, n, sum-coins[n-1], memo) + 
                          countWaysRec(coins, n - 1, sum, memo);
}

int countWays(vector<int> &coins, int n, int sum) {
    vector<vector<int>> memo(n + 1, vector<int>(sum + 1, -1));
    return countWaysRec(coins, n, sum, memo);
}

int main()
{
    int n = 3, sum = 5;
    vector<int> coins = {1, 2, 3};

    int res = countWays(coins, n, sum);
    cout << res << endl;

    return 0;
}
