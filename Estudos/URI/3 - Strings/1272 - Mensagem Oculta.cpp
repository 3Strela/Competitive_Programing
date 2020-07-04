#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string l, ans;
        getline(cin, l);
        for (int i = 0; i < l.size(); i++)
        {
            if (i == 0 and int(l[i]) >= 97 and int(l[i]) <= 122)
                ans += l[i];
            else if (int(l[i]) >= 97 and int(l[i]) <= 122 and l[i - 1] == ' ')
                ans += l[i];
        }
        cout << ans << "\n";
    }

    return 0;
}