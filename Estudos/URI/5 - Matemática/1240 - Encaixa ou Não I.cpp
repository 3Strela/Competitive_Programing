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
        string a, b;
        bool enc = true;
        cin >> a >> b;
        if (b.size() > a.size())
            cout << "nao encaixa\n";
        else if (a == b)
            cout << "encaixa\n";
        else if (a.size() >= b.size())
        {
            int j = 0;
            for (int i = b.size() - 1; i >= 0; i--){
                if (a[a.size() - 1 - j] != b[i])
                {
                    enc = false;
                    break;
                }
                j++;
            }
            if (enc)
                cout << "encaixa\n";
            else
                cout << "nao encaixa\n";
        }
    }

    return 0;
}