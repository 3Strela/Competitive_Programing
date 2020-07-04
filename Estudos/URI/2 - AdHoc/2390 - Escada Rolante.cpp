#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, temp, aux = 0, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp >= aux)
            ans += 10;
        else
            ans += temp + 10 - aux;
        aux = temp + 10;
    }
    cout << ans << "\n";

    return 0;
}