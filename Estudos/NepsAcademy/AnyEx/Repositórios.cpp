#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c, n;
    cin >> c >> n;

    map<int, int> prgAntes, prgDepois;

    for (int i = 0; i < c; i++)
    {
        int pc, vc;
        cin >> pc >> vc;
        prgAntes[pc] = vc;
    }

    for (int i = 0; i < n; i++)
    {
        int pn, vn;
        cin >> pn >> vn;
        if (prgAntes.find(pn) != prgAntes.end())
        {
            if (vn > prgAntes[pn])
            {
                prgAntes[pn] = vn;
                prgDepois[pn] = vn;
            }
        }
        else
            prgDepois[pn] = vn;
    }
    for (auto k : prgDepois)
        cout << k.first << " " << k.second << "\n";

    return 0;
}
