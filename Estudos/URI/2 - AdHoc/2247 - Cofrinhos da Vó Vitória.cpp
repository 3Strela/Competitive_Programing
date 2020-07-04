#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, aux = 1;
    while (cin >> n)
    {
        if (aux != 1)
            cout << "\n";
        if (n == 0)
            break;
        int tt = 0;
        cout << "Teste " << aux << "\n";
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            tt += a - b;
            cout << tt << "\n";
        }
        aux++;
    }

    return 0;
}