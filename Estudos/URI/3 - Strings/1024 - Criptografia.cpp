#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    for (int z = 0; z < n; z++)
    {
        string cod, desc, aux;
        getline(cin, cod);
        for (int i = 0; i < cod.size(); i++)
        {
            if ((int(cod[i]) >= 65 and int(cod[i]) <= 90) or
                (int(cod[i]) >= 97 and int(cod[i]) <= 122))
                cod[i] += 3;
        }
        for (int i = cod.size() - 1; i >= 0; i--)
            desc += cod[i];
        for (int i = ceil(cod.size() / 2); i < cod.size(); i++)
            desc[i] -= 1;
        cout << desc << "\n";
    }

    return 0;
}