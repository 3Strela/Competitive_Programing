#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);

    string seq, crib;
    int ans = 0;
    cin >> seq >> crib;

    int de = 0, ate = seq.size() - crib.size();
    while (de <= ate)
    {
        bool taCerto = true;
        int i = de;
        for (int j = 0; j < crib.size(); j++)
        {
            if (seq[i] == crib[j])
                taCerto = false;
            i++;
        }
        if (taCerto)
            ans++;
        de++;
    }
    
    cout << ans << "\n";

    return 0;
}