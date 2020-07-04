#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int mr = 0, mr2 = 0, ans;
        vector<int> lista(n);
        for (int i = 0; i < n; i++)
        {
            cin >> lista[i];
            mr = max(mr, lista[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (lista[i] > mr2 and lista[i] != mr)
            {
                mr2 = lista[i];
                ans = i;
            }
        }
        cout << ans + 1 << "\n";
    }

    return 0;
}