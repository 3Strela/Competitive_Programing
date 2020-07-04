#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 and b == 0)
            break;
        string soma = to_string(a + b), ans;
        for (int i = 0; i < soma.size(); i++)
            if (soma[i] != '0')
                ans += soma[i];
        cout << ans << "\n";
    }
    return 0;
}