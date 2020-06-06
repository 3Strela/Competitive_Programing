#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l, d, k, p;
    cin >> l >> d >> k >> p;
    cout << (l * k) + ((l / d) * p) << "\n";

    return 0;
}