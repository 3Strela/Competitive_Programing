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
        int ans;
        cout << "Teste " << aux << "\n";
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == i)
                ans = i;
        }
        cout << ans << "\n";
        aux++;
    }
    
    return 0;
}