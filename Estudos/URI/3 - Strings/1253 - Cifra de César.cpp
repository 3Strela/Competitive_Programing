#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string cod;
        int tr;
        cin >> cod >> tr;
        for (int i = 0; i < cod.size(); i++)
            if (int(cod[i] - tr) < 65)
                cod[i] = 91 - (65 - (cod[i] - tr));
            else
                cod[i] -= tr;
        cout << cod << "\n";
    }

    return 0;
}