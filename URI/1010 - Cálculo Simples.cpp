#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cod, numpc;
    double val, nval;
    for (int i = 0; i < 2; i++)
    {
        cin >> cod >> numpc >> val;
        nval = (val * numpc) + nval;
    }
    cout << "VALOR A PAGAR: R$ " << setprecision(2) << fixed << nval << "\n";

    return 0;
}