#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a, b, sm = 0;
    cin >> a >> b;
    sm = ((a + b) * (b - a + 1)) / 2;
    cout << sm << "\n";

    return 0;
}