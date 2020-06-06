#include <bits/stdc++.h>
using namespace std;
int decres(int a, int b)
{
    return a > b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double v[3];
    cin >> v[0] >> v[1] >> v[2];
    sort(v, v + 3, decres);
    if (v[0] >= v[1] + v[2])
        cout << "NAO FORMA TRIANGULO\n";
    else
    {
        if (v[0] * v[0] == (v[1] * v[1]) + (v[2] * v[2]))
            cout << "TRIANGULO RETANGULO\n";
        if (v[0] * v[0] > (v[1] * v[1]) + (v[2] * v[2]))
            cout << "TRIANGULO OBTUSANGULO\n";
        if (v[0] * v[0] < (v[1] * v[1]) + (v[2] * v[2]))
            cout << "TRIANGULO ACUTANGULO\n";
        if (v[0] == v[1] and v[0] == v[2])
            cout << "TRIANGULO EQUILATERO\n";
        if ((v[0] == v[1] and v[0] != v[2]) or (v[1] == v[2] and v[1] != v[0]) or (v[0] == v[2] and v[0] != v[1]))
            cout << "TRIANGULO ISOSCELES\n";
    }

    return 0;
}