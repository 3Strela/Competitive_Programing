#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 and b == a)
            break;
        cout << a + b << "\n";
    }

    return 0;
}