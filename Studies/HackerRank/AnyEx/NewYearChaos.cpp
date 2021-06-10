#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'minimumBribes' function below.
 *
 * The function accepts INTEGER_ARRAY q as parameter.
 */

void minimumBribes(vector<int> q)
{
    bool chaotic = false;
    int ans = 0;
    for (int i = 0; i < q.size(); ++i)
        if (q[i] - (i + 1) > 2)
        {
            chaotic = true;
            break;
        }
        else
            for (int j = max(0, q[i] - 2); j < i; ++j)
                if (q[j] > q[i])
                    ans++;

    if (!chaotic)
        cout << ans << "\n";
    else
        cout << "Too chaotic\n";
}