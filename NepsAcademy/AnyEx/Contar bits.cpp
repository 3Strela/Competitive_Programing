#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int count_bits(ulli x)
{
    int ret = 0;
    while (x != 0)
    {
        ++ret;
        x -= x & -x;
    }
    return ret;
}
int main()
{
    ulli n;
    cin >> n;
    cout << count_bits(n) << "\n";

    return 0;
}