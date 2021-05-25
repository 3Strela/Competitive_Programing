#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'bitwiseAnd' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER N
 *  2. INTEGER K
 */

int bitwiseAnd(int N, int K) 
{
    int ans = 0;
    for (int i = 1; i < N; ++i)
    {
        for (int j = i+1; j <= N; ++j)
            if ( (i&j) < K)
                ans = max(ans, i&j);

        if (ans == K-1)
            break;
    }
    
    return ans;
}