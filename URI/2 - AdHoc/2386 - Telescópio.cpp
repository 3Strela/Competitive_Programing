#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    unsigned long long int a, n, ans = 0;
    cin >> a >> n;
    for (int i = 0; i < n; i++)
    {
        unsigned long long int temp;
        cin >> temp;
        if (temp * a >= 40000000)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}