#include <bits/stdc++.h>
using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int ans = INT_MIN;
    for (int i = 1; i < 5; i++)
        for (int j = 1; j < 5; j++)
        {
            int sum = 0;
            sum += arr[i][j] + arr[i-1][j] + arr[i-1][j-1] + arr[i-1][j+1];
            sum += arr[i+1][j] + arr[i+1][j-1] + arr[i+1][j+1];
            ans = max(ans, sum); 
        }
    return ans;
}