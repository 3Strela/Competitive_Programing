#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, v[7]{100, 50, 20, 10, 5, 2, 1}, aux;
    cin >> a;
    aux = a;
    cout << a << endl;
    for (int i = 0; i < 8; i++)
    {
        int b = aux / v[i];
        aux -= b * v[i];
        v[i] = b;
    }
    cout << v[0] << " nota(s) de R$ 100,00" << "\n"
         << v[1] << " nota(s) de R$ 50,00" << "\n"
         << v[2] << " nota(s) de R$ 20,00" << "\n"
         << v[3] << " nota(s) de R$ 10,00" << "\n"
         << v[4] << " nota(s) de R$ 5,00" << "\n"
         << v[5] << " nota(s) de R$ 2,00" << "\n"
         << v[6] << " nota(s) de R$ 1,00" << "\n";

    return 0;
}