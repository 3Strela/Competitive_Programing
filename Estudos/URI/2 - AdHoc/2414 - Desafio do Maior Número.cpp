#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ans = 0, n;
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;
        ans = max(ans, n);
    }
    cout << ans << "\n";

    return 0;
}