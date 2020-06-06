#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--)
    {
        string kame;
        int p1 = 0, p2 = 0, troca = 0;
        cin >> kame;
        for (int i = 0; i < kame.size(); i++)
        {
            if (kame[i] == 'm')
                troca = 1;
            if (troca == 0 and kame[i] == 'a')
                p1++;
            if (troca == 1 and kame[i] == 'a')
                p2++;
        }
        cout << 'k';
        for (int i = 0; i < p1 * p2; i++)
            cout << 'a';
        cout << "\n";
    }

    return 0;
}