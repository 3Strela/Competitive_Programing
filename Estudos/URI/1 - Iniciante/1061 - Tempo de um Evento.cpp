#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int di, hi, mi, si, df, hf, mf, sf, tti, ttf, tt;
    string lixo;
    cin >> lixo >> di >> hi >> lixo >> mi >> lixo >> si;
    cin >> lixo >> df >> hf >> lixo >> mf >> lixo >> sf;
    tti = si + (mi * 60) + (hi * 60 * 60) + (di * 60 * 60 * 24);
    ttf = sf + (mf * 60) + (hf * 60 * 60) + (df * 60 * 60 * 24);
    tt = ttf - tti;
    cout << tt / 86400 << " dia(s)\n";
    tt = tt % 86400;
    cout << tt / 3600 << " hora(s)\n";
    tt = tt % 3600;
    cout << tt / 60 << " minuto(s)\n";
    tt = tt % 60;
    cout << tt << " segundo(s)\n";

    return 0;
}