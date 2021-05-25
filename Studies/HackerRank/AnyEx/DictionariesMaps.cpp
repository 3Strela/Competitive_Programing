#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<string, string> mp;
    while (n--)
    {
        string a, b;
        cin >> a >> b;

        mp[a] = b;
    }

    string q;
    while (cin >> q)
    {
        if (mp.find(q) != mp.end())
            cout << q << "=" << mp[q] << "\n";
        else
            cout << "Not found\n";
    }

    return 0;
}
