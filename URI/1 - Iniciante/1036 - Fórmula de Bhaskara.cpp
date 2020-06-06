#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;
    cout.precision(5);
    cout.setf(ios::fixed);
    if (a == 0)
        cout << "Impossivel calcular\n";
    else if (((b * b) - (4 * a * c)) < 0)
        cout << "Impossivel calcular\n";
    else
        cout << "R1 = " << (-b + sqrt((b * b) - (4 * a * c))) / (2 * a) << "\n"
             << "R2 = " << (-b - sqrt((b * b) - (4 * a * c))) / (2 * a) << "\n";

    return 0;
}