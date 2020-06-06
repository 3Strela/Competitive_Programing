#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X, Y;
    cin >> X >> Y;
    if (X <= 432 && X >= 0 && Y <= 468 && Y >= 0)
        cout << "dentro\n";
    else
        cout << "fora\n";

    return 0;
}