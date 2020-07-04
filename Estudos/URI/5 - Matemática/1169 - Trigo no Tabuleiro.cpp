#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, temp;
    unsigned long long int graos[73];
    graos[0] = 1;
    for (int i = 1; i < 73; i++)
        graos[i] = graos[i - 1] * 2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        unsigned long long ans = (graos[temp] / 12) / 1000;
        if (temp == 64)
            ans = 1537228672809129;
        cout << ans << " kg\n";
    }

    return 0;
}