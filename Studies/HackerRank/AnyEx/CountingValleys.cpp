#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path)
{
    int ans = 0, acum = 0;
    bool valley;
    for (int i = 0; i < steps; ++i)
    {
        if (path[i] == 'D')
            acum--;
        else if (path[i] == 'U')
            acum++;

        if (acum < 0)
            valley = true;
        else if (acum >= 0 and valley)
            ans++, valley = false;
    }

    return ans;
}