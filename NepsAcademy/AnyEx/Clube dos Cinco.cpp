#include <iostream>
using namespace std;
int main()
{
    int n, a, b, c, d, e, f, g;
    cin >> n >> a >> b >> c >> d >> e >> f >> g;
    n -= g;
    a -= (d + e);
    b -= (d + f);
    c -= (e + f);
    if (a + b + c + d + e + f == n)
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}