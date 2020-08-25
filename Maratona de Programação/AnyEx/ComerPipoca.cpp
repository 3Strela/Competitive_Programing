#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, c, t, tt = 0;
    cin >> n >> c >> t;

    vector<int> sacos(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> sacos[i];
        tt += sacos[i];
    }

    int de = 1, ate = ceil(tt / double(t)), ans = ate;
    while (de <= ate)
    {
        int meio = (de + ate) / 2, sm = 0, qtc = c;
        for (int i = 0; i < n; i++)
        {
            sm += sacos[i];
            if (sm > t * meio)
            {
                sm = 0;
                i--;
                qtc--;
            }
            if (qtc == 0)
                break;
        }

        if (qtc == 0)
            de = meio + 1;
        else
        {
            ate = meio - 1;
            ans = meio;
        }
    }
    
    cout << ans << "\n";

    return 0;
}