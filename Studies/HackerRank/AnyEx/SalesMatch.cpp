#include <bits/stdc++.h>
using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar)
{
    int ans = 0;

    map<int, int> socks;
    for (auto x : ar)
        socks[x] += 1;

    for (auto k : socks)
        ans += k.second / 2;

    return ans;
}