#include <iostream>
using namespace std;
int main()
{
    char x;
    cin >> x;

    double n1, n2;
    cin >> n1 >> n2;

    cout.precision(2);
    cout.setf(ios::fixed);
    if (x == 'M')
        cout << n1 * n2 << "\n";
    else
        cout << n1 / n2 << "\n";

    return 0;
}