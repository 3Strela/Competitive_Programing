#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'luckBalance' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. 2D_INTEGER_ARRAY contests
 */

int luckBalance(int k, vector<vector<int>> contests)
{
    sort(contests.begin(), contests.end());
    int ans = 0;
    for (int i = contests.size() - 1; i >= 0; i--)
        if (contests[i][1] == 0 or k > 0)
        {
            if (contests[i][1] == 1)
                k--;
            ans += contests[i][0];
        }
        else
            ans -= contests[i][0];

    return ans;
}
