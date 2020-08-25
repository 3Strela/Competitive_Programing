#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, n;
    cin >> v >> n;

    unsigned long long tt = v * n;
    for (int i = 1; i <= 9; i++)
        cout << int(ceil(tt * i / double(10))) << (i == 9 ? "\n" : " ");

    return 0;
}