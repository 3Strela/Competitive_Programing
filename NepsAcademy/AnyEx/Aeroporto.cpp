#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, v, aux = 1;

    while (cin >> a >> v)
    {
        if (a == v and v == 0)
            break;

        vector<vector<int>> adj(a + 1);
        for (int i = 0; i < v; i++)
        {
            int in, vin;
            cin >> vin >> in;
            adj[vin].push_back(in);
            adj[in].push_back(vin);
        }

        int mr = 0;
        vector<int> ans;
        cout << "Teste " << aux << "\n";

        for (int i = 1; i <= a; i++)
        {
            int cc = 0;
            for (auto j : adj[i])
                cc++;
            if (cc > mr)
            {
                ans.erase(ans.begin(), ans.end());
                ans.push_back(i);
            }
            else if (cc == mr)
                ans.push_back(i);
            mr = max(mr, cc);
        }

        for (int i = 0; i < ans.size(); i++)
            (i == ans.size() - 1 ? cout << ans[i] << "\n\n" : cout << ans[i] << " ");
        
        aux++;
    }

    return 0;
}