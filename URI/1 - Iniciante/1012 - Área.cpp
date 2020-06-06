#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(3);
    cout.setf(ios::fixed);
    cout << "TRIANGULO: " << (a * c) / 2 << "\n"
         << "CIRCULO: " << 3.14159 * (c * c) << "\n"
         << "TRAPEZIO: " << ((a + b) * c) / 2 << "\n"
         << "QUADRADO: " << b * b << "\n"
         << "RETANGULO: " << a * b << "\n";

    return 0;
}