#include <bits/stdc++.h>
using namespace std;

// Complete the maxSubsetSum function below.

int maxSubsetSum(vector<int> arr)
{
    int ans = INT_MIN;
    vector<int> dp(arr.size() + 3);

    for (int i = arr.size() - 1; i >= 0; i--)
        dp[i] = max(arr[i] + dp[i + 2], dp[i + 1]);

    return dp[0];
}