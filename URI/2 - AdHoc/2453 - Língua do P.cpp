#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string l, ans;
    getline(cin, l);
    int qt = 0;
    for (int i = 0; i < l.size(); i++){
        if (l[i] != ' ')
        {
            if (qt % 2 != 0)
                ans += l[i];
            qt++;
        }
        else
            ans += l[i];
    }
    cout << ans << "\n";

    return 0;
}