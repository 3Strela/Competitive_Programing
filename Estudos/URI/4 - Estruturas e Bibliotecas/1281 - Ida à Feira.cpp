#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m, p;
        double ans = 0;
        cin >> m;
        map<string, double> produtos;
        for (int i = 0; i < m; i++)
        {
            string fruta;
            double valor;
            cin >> fruta >> valor;
            produtos.insert(make_pair(fruta, valor));
        }
        cin >> p;
        for (int i = 0; i < p; i++)
        {
            int qt;
            string prod;
            cin >> prod >> qt;
            for (auto i : produtos)
                if (i.first == prod)
                {
                    ans += qt * i.second;
                    break;
                }
        }
        cout << "R$ " << setprecision(2) << fixed << ans << "\n";
    }

    return 0;
}