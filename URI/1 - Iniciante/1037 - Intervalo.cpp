#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a;
    cin >> a;
    if (a >= 0 && a <= 25)
        cout << "Intervalo [0,25]\n";
    else if (a <= 50 && a > 25)
        cout << "Intervalo (25,50]\n";
    else if (a <= 75 && a > 50)
        cout << "Intervalo (50,75]\n";
    else if (a <= 100 && a > 75)
        cout << "Intervalo (75,100]\n";
    else
        cout << "Fora de intervalo\n";

    return 0;
}