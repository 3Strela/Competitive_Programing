#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c = 0;
    cin >> a >> b;
    if (a == b)
        cout << "O JOGO DUROU 24 HORA(S)\n";
    else
    {
        while (a != b)
        {
            a++;
            if (a == 24)
                a = 0;
            c++;
        }
        cout << "O JOGO DUROU " << c << " HORA(S)\n";
    }

    return 0;
}