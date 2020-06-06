#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        vector<string> l(n);
        for (int i = 0; i < n; i++)
            cin >> l[i];
        sort(l.begin(), l.end());
        for (int i = 0; i < n; i++)
            cout << l[i] << "\n";
    }

    return 0;
}