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
            if (l[i + 1] == 'o' and l[i + 2] == 'u' and l[i + 3] == 'l' and l[i + 4] == 'u' and l[i + 5] == 'p' and l[i + 6] == 'u' and l[i + 7] == 'k' and l[i + 8] == 'k')
                ans += "J";
            else if (i >= 9)
            {
                if (l[i - 8] == 'o' and l[i - 7] == 'u' and l[i - 6] == 'l' and l[i - 5] == 'u' and l[i - 4] == 'p' and l[i - 3] == 'u' and l[i - 2] == 'k' and l[i - 1] == 'k')
                    ans += 'i';
                else
                    ans += l[i];
            }
            else
                ans += l[i];

        cout << ans << "\n";
    }

    return 0;
}