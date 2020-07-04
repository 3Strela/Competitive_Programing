#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    unsigned long long int Feyn[102];
    Feyn[1] = 1;
    for (int i = 2; i < 102; i++)
        Feyn[i] = Feyn[i - 1] + (i * i);
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        cout << Feyn[n] << "\n";
    }

    return 0;
}