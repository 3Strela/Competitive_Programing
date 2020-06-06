#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    if (n <= 10)
        cout << 7 << "\n";
    else if (n >= 11 and n <= 30)
        cout << 7 + (n - 10) << "\n";
    else if (n >= 31 and n <= 100)
        cout << 27 + ((n - 30) * 2) << "\n";
    else if (n > 100)
        cout << 167 + ((n - 100) * 5) << "\n";

    return 0;
}