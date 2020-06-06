#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        unsigned long long ans = 1;
        string k;
        cin >> n >> k;
        while (n > 1)
        {
            ans *= n;
            n -= k.size();
        }
        cout << ans << "\n";
    }

    return 0;
}