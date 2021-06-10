#include <bits/stdc++.h>
using namespace std;

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr)
{
    int ans = INT_MAX;
    sort(arr.begin(), arr.end());

    for (int i = 1; i < arr.size(); ++i)
        ans = min(ans, abs(arr[i] - arr[i - 1]));

    return ans;
}