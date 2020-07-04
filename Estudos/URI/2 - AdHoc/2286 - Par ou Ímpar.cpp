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
        string par, impar;
        vector<string> ans;
        cin >> par >> impar;
        cout << "Teste " << aux << "\n";
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            if ((a + b) % 2 == 0)
                ans.push_back(par);
            else
                ans.push_back(impar);
        }
        for (int i = 0; i < ans.size(); i++)
            cout << ans[i] << "\n";
        aux++;
    }

    return 0;
}