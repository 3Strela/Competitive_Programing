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
        string lin;
        getline(cin, lin);
        if (lin[0] == lin[2])
            cout << (int(lin[0]) - 48) * (int(lin[2]) - 48) << "\n";
        else if (int(lin[1]) >= 65 and int(lin[1]) <= 90)
            cout << (int(lin[2]) - 48) - (int(lin[0]) - 48) << "\n";
        else if (int(lin[1]) >= 97 and int(int(lin[1])) <= 122)
            cout << (int(lin[0]) - 48) + (int(lin[2]) - 48) << "\n";
    }

    return 0;
}