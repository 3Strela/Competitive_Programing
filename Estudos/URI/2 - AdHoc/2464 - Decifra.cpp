#include <bits/stdc++.h>
using namespace std;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string beto, cod, decod;
    cin >> beto >> cod;
    for (int i = 0; i < cod.size(); i++)
        for (int j = 0; j < beto.size(); j++)
            if (cod[i] == beto[j])
            {
                decod += 97 + j;
                break;
            }
    cout << decod << "\n";

    return 0;
}