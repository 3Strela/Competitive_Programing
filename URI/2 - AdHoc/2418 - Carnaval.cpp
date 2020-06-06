#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double v[5], sm = 0, mr = 0, mn = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        sm += v[i];
        if (mn == 0)
            mn = v[i];
        else if (mn > v[i])
            mn = v[i];
        if (mr < v[i])
            mr = v[i];
    }
    sm = sm - (mr + mn);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << sm << "\n";

    return 0;
}