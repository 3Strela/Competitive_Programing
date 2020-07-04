#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, maior, menor, ans = 0;
    cin >> x >> y;
    if (x > y)
    {
        maior = x;
        menor = y;
    }
    else
    {
        maior = y;
        menor = x;
    }
    while (menor != maior)
    {
        menor++;
        if (menor % 2 != 0 and menor != maior)
            ans += menor;
    }
    cout << ans << "\n";

    return 0;
}