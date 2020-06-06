#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ind;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string l, s1, s2, ans;
        getline(cin, l);
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] == ' ' and l[i + 1] != ' ')
            {
                ind = i + 1;
                break;
            }
            if (l[i] != ' ')
                s1 += l[i];
        }
        for (int i = ind; i < l.size(); i++)
            s2 += l[i];
        for (int i = 0; i < min(s1.size(), s2.size()); i++)
        {
            ans += s1[i];
            ans += s2[i];
        }
        if (max(s1.size(), s2.size()) - min(s1.size(), s2.size()) != 0)
            for (int i = min(s1.size(), s2.size()); i < min(s1.size(), s2.size()) + (max(s1.size(), s2.size()) - min(s1.size(), s2.size())); i++)
                if (max(s1.size(), s2.size()) == s1.size())
                    ans += s1[i];
                else
                    ans += s2[i];
        cout << ans << "\n";
    }

    return 0;
}