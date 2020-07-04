#include <bits/stdc++.h>
using namespace std;
int solv(int a, int b)
{
    if (b == 0)
        return a;
    return solv(b, a % b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << solv(a, b) << "\n";
    }

    return 0;
}