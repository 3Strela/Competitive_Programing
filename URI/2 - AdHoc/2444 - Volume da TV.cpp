#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v, t, temp;
    cin >> v >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> temp;
        v += temp;
        if (v > 100)
            v = 100;
        else if (v < 0)
            v = 0;
    }
    cout << v << "\n";

    return 0;
}