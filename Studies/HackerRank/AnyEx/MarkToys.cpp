#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'maximumToys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY prices
 *  2. INTEGER k
 */

int maximumToys(vector<int> prices, int k)
{
    sort(prices.begin(), prices.end());

    int ans = 0;
    for (int i = 0; i < prices.size(); ++i)
    {
        if (k - prices[i] < 0)
            break;
        k -= prices[i];
        ans++;
    }

    return ans;
}