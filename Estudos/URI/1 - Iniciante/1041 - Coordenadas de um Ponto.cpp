#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x, y;
    cin >> x >> y;
    if (x > 0 and y > 0)
        cout << "Q1\n";
    if (x < 0 and y > 0)
        cout << "Q2\n";
    if (x < 0 and y < 0)
        cout << "Q3\n";
    if (x > 0 and y < 0)
        cout << "Q4\n";
    if (x == 0 and y == 0)
        cout << "Origem\n";
    if (x != 0 and y == 0)
        cout << "Eixo X\n";
    if (x == 0 and y != 0)
        cout << "Eixo Y\n";

    return 0;
}