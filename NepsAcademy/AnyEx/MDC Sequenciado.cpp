#include <bits/stdc++.h>
using namespace std;
int euclides(int a, int b)
{
    if (b == 0)
        return a;
    return euclides(b, a % b);
}
int main()
{
    int n, ans = 1000000, temp, a = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (a == 0)
            a = temp;
        else
        {
            ans = min(ans, euclides(a, temp));
            a = temp;
        }
    }
    cout << ans << "\n";

    return 0;
}