#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    if (b >= a)
        if (b % a == 0)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n";
    else
    {
        if (a % b == 0)
            cout << "Sao Multiplos\n";
        else
            cout << "Nao sao Multiplos\n";
    }

    return 0;
}