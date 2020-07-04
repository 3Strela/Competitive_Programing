#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int hi, hf, mi, mf, htt, mtt;
    cin >> hi >> mi >> hf >> mf;
    htt = hf - hi;
    if (htt < 0)
        htt = 24 + (hf - hi);
    mtt = mf - mi;
    if (mtt < 0)
    {
        mtt = 60 + (mf - mi);
        htt--;
        if (htt == -1)
            htt = 23;
    }
    if (hi == hf && mi == mf)
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n";
    else
        cout << "O JOGO DUROU " << htt << " HORA(S) E " << mtt << " MINUTO(S)\n";

    return 0;
}