#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b)
    {
        if (a == b and b == 0)
            break;
        set<int> listaA, listaB;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            listaA.insert(temp);
        }
        for (int i = 0; i < b; i++)
        {
            int temp;
            cin >> temp;
            listaB.insert(temp);
        }
        int ans = 0, ans2 = 0;
        for (auto i : listaA)
        {
            bool existe = listaB.find(i) != listaB.end();
            if (!existe)
                ans++;
        }
        for (auto i : listaB)
        {
            bool existe = listaA.find(i) != listaA.end();
            if (!existe)
                ans2++;
        }

        cout << min(ans, ans2) << "\n";
    }
    
    return 0;
}