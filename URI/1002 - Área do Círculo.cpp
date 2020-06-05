#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double area, n, raio;
    cin >> raio;
    area = 3.14159 * (raio * raio);
    cout << "A=" << setprecision(4) << fixed << area << "\n";

    return 0;
}