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
        int x;
        cin >> x;
        if (x % 2 == 0 and x != 0)
            cout << "EVEN ";
        else if (x != 0)
            cout << "ODD ";
        if (x > 0)
            cout << "POSITIVE\n";
        else if (x < 0)
            cout << "NEGATIVE\n";
        else if (x == 0)
            cout << "NULL\n";
    }

    return 0;
}