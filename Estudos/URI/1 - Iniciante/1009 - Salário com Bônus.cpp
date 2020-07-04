#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string nome;
    double a, b;
    cin >> nome >> a >> b;
    cout << "TOTAL = R$ " << setprecision(2) << fixed << a + (b * 0.15) << "\n";

    return 0;
}