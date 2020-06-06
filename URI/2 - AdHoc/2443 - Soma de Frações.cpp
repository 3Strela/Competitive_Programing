#include <iostream>
using namespace std;
int mdc(int a, int b)
{
    if (a % b == 0)
        return b;
    else
        return mdc(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int num = (a * d) + (c * b);
    int den = b * d;
    int div = mdc(num, den);
    num /= div;
    den /= div;
    cout << num << " " << den << "\n";

    return 0;
}