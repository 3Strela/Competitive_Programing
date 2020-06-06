#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double raio;
    cin >> raio;
    cout << "VOLUME = " << setprecision(3) << fixed << (4 * 3.14159 * (raio * raio * raio)) / 3 << "\n";

    return 0;
}