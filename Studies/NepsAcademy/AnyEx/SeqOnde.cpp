#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> lis;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(lis.begin(), lis.end(), v[i]);

        if (it == lis.end())
        {
            lis.push_back(v[i]);

            vector<int> lis_inv;
            lis_inv.push_back(v[i]);

            int curr_tam = lis.size();

            for (int j = i; j < n; j++)
            {
                auto it_2 = lower_bound(lis_inv.begin(), lis_inv.end(), v[j], greater<int>());

                if (it_2 == lis_inv.end())
                    lis_inv.push_back(v[j]);
                else
                    *it_2 = v[j];

                if (lis_inv.size() == curr_tam)
                {
                    ans = max(ans, curr_tam);
                    break;
                }
            }
        }
        else
            *it = v[i];
    }

    cout << ans + ans - 1;

    return 0;
}