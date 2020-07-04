#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    double dis = 0, temp, qt = 0;
    while (getline(cin, s))
    {
        cin >> temp;
        dis += temp;
        qt++;
        cin.ignore();
    }
    cout << setprecision(1) << fixed << dis / qt << "\n";
}