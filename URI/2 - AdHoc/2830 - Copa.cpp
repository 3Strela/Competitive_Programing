#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    if ((a - 1) / 2 == (b - 1) / 2)
        cout << "oitavas\n";
    else if ((a - 1) / 4 == (b - 1) / 4)
        cout << "quartas\n";
    else if ((a - 1) / 8 == (b - 1) / 8)
        cout << "semifinal\n";
    else
        cout << "final\n";

    return 0;
}