#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int z = 0; z < n; z++)
    {
        int li;
        cin >> li;
        string ans, temp;
        for (int i = 0; i < li; i++)
        {
            cin >> temp;
            if (i == 0)
                ans = temp;
            else if (ans != temp)
                ans = "ingles";
        }
        cout << ans << "\n";
    }

    return 0;
}