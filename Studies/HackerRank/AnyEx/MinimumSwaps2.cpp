#include <bits/stdc++.h>
using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); ++i)
        if (arr[i] != i + 1)
        {
            swap(arr[i], arr[arr[i] - 1]);
            i--;
            ans++;
        }

    return ans;
}