#include <bits/stdc++.h>
using namespace std;

// Complete the superDigit function below.

int superDigit(string n, int k)
{
    string superN = n;
    if (superN.size() == 1)
        return superN[0] - '0';

    long long sum = 0;
    for (char i : superN)
        sum += i - '0';

    if (k > 0)
        sum *= k;

    string new_n = "";
    while (sum > 0)
    {
        new_n += char((sum % 10) + '0');
        sum /= 10;
    }
    reverse(new_n.begin(), new_n.end());

    return superDigit(new_n, 0);
}