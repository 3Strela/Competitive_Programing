#include <bits/stdc++.h>
using namespace std;

vector<string> split_string(string);

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c)
{
    int ans = 0;

    int e = 0, siz = c.size() - 1;
    while (e < siz)
    {
        if (c[e + 2] == 0)
            e += 2;
        else if (c[e + 1] == 0)
            e++;

        ans++;
    }

    return ans;
}