#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    unsigned long long int r, l, ans;
    cin >> r >> l;
    ans = double(4 / 3.0) * 3.1415 * (r * r * r);
    cout << l/ans << "\n";
 
    return 0;
}