#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int v[3], aux[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> v[i];
        aux[i] = v[i];
    }
    sort(v, v + 3);
    for (int i = 0; i < 3; i++)
        cout << v[i] << "\n";
    cout << endl;
    for (int i = 0; i < 3; i++)
        cout << aux[i] << "\n";

    return 0;
}