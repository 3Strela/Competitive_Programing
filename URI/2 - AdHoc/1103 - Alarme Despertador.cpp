#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int hi, mi, hf, mf;
    while (cin >> hi >> mi >> hf >> mf)
    {
        if (hi == 0 and mi == 0 and hf == 0 and mf == 0)
            break;
        int htt = hf - hi;
        if (htt < 0)
            htt = 24 + (hf - hi);
        int mtt = mf - mi;
        if (mtt < 0)
        {
            mtt = 60 + (mf - mi);
            htt--;
            if (htt == -1)
                htt = 23;
        }
        int ans = (htt * 60) + mtt;
        cout << ans << "\n";
    }
    
    return 0;
}