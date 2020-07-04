#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, c, t, sm = 0;
    cin >> n >> c >> t;
    vector<int> lista(n + 2);
    for (int i = 1; i <= n; i++)
    {
        cin >> lista[i];
        sm += lista[i];
    }
    int de = 1, ate = ceil(sm / double(t)), ans = ate;
    while (de <= ate)
    {
        int meio = (de + ate) / 2, smm = 0, qt = c;
        for (int i = 1; i <= n; i++)
        {
            smm += lista[i];
            if (smm > meio*t)
            {
                qt--;
                smm = 0;
                i--;
            }
            if (qt == 0)
                break;
        }
        if (qt == 0)
            de = meio + 1;
        else if (qt >= 1)
        {
            ate = meio - 1;
            ans = min(ans, meio);
        }
    }
    cout << ans << "\n";

    return 0;
}