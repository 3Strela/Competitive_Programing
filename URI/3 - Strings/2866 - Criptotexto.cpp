#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int z = 0; z < n; z++)
    {
        string cod, decod;
        cin >> cod;
        for (int i = cod.size() - 1; i >= 0; i--)
            if (int(cod[i]) >= 97 and int(cod[i]) <= 122)
                decod += cod[i];
        cout << decod << "\n";
    }

    return 0;
}