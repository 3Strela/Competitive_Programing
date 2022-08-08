#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    unordered_map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int temp;
        scanf("%d", &temp);

        mp[temp] = i;
    }

    vector<int> lis;
    for (int i = 0; i < m; i++)
    {
        int temp;
        scanf("%d", &temp);

        int busca = mp[temp]; 
        if (busca != 0)
        {
            vector<int>::iterator it = lower_bound(lis.begin(), lis.end(), busca);

            if (it == lis.end())
                lis.push_back(busca);
            else
                *it = busca;
        }
    }

    int ans = lis.size();
    printf("%d\n", ans);

    return 0;
}