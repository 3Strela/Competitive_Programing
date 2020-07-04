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
        int lin, ans = 0;
        string elm;
        cin >> lin;
        for (int j = 0; j < lin; j++)
        {
            cin >> elm;
            for (int k = 0; k < elm.size(); k++)
                ans += ((int(elm[k]) - 65) + j + k);
        }
        cout << ans << "\n";
    }

    return 0;
}