#include <bits/stdc++.h>
using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n)
{
    long long ans = 0, div = n / s.size(), resto = n % s.size();

    for (int i = 0; i < s.size(); ++i)
        if (s[i] == 'a')
            ans += 1 * (div + (i + 1 <= resto ? 1 : 0));

    return ans;
}