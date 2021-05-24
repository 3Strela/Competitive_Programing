#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string s;
    cin >> s;

    vector<char> lis;

    for (int i = 0; i < s.size(); i++)
    {
        vector<char>::iterator it = upper_bound(lis.begin(), lis.end(), s[i]);

        if (it == lis.end())
            lis.push_back(s[i]);
        else
            *it = s[i];
    }

    cout << lis.size() << "\n";

    return 0;
}