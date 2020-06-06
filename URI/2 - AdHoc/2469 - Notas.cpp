#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ans;
    cin >> n;
    vector<int> lista(102);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        lista[temp]++;
    }
    ans = 0;
    for (int i = 1; i < lista.size(); i++)
        if (lista[ans] <= lista[i])
            ans = i;
    cout << ans << "\n";

    return 0;
}