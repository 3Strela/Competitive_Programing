#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, mk, ml;
    for (int i = 1; i <= 16; i++){
        cin >> x;
        if (x == 9)
            ml = i;
        if (x == 1)
            mk = i;
    }
    if ((ml - 1) / 2 == (mk - 1) / 2)
        cout << "oitavas\n";
    else if ((ml - 1) / 4 == (mk - 1) / 4)
        cout << "quartas\n";
    else if ((ml - 1) / 8 == (mk - 1) / 8)
        cout << "semifinal\n";
    else
        cout << "final\n";

    return 0;
}