#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, ans;
    cin >> a >> b >> c;
    a /= 2;
    b /= 3;
    c /= 5;
    ans = min(a, b);
    ans = min(ans, c);
    cout << ans << "\n";

    return 0;
}