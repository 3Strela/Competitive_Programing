#include <iostream>
using namespace std;
typedef unsigned long long int ulli;
ulli mdc(ulli a, ulli b)
{
    if (a % b == 0)
        return b;
    else
        return mdc(b, a % b);
}

int main()
{
    ulli a, b, c, d;
    cin >> a >> b >> c >> d;
    ulli num = (a * d) + (c * b);
    ulli den = b * d;
    ulli div = mdc(num, den);
    num /= div;
    den /= div;
    cout << num << " " << den << "\n";

    return 0;
}