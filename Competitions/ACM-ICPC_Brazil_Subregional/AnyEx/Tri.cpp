#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    while (cin >> n)
    {
        vector<int> v(n + 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];

            v[i] += v[i - 1];
        }

        if (v[n] % 3 != 0)
            cout << "0\n";
        else
        {
            int j = 0, k = 0, tam = v[n] / 3, ans = 0;

            for (int i = 0; v[i] + (2 * tam) < v[n]; i++)
            {
                while (v[j] < v[i] + tam)
                    j++;
                while (v[k] < v[i] + 2 * tam)
                    k++;
                if (v[j] == v[i] + tam and v[k] == v[i] + 2 * tam)
                    ans++;
            }

            cout << ans << "\n";
        }
    }

    return 0;
}