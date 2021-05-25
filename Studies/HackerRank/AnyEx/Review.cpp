#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string even, odd;
        for (int i = 0; i < s.size(); ++i)
            if (i % 2 == 0)
                even += s[i];
            else
                odd += s[i];

        cout << even << " " << odd << "\n";
    }

    return 0;
}
