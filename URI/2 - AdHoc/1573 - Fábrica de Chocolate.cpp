#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == 0 and b == a and c == a)
            break;
        cout << floor(cbrt(a * b * c)) << "\n";
    }
    
    return 0;
}