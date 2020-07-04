#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double n1, d1, v1, n2, d2, v2;
    cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
    double t1 = d1 / v1, t2 = d2 / v2;
    if (t1 < t2)
        cout << n1 << "\n";
    else
        cout << n2 << "\n";
    
    return 0;
}