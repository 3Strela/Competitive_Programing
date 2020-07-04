#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string x;
        int ans = 1;
        cin >> x;
        for (int i = 0; i < x.size(); i++)
            if (toupper(x[i]) == 'A' or toupper(x[i]) == 'E' or
                toupper(x[i]) == 'I' or toupper(x[i]) == 'O' or toupper(x[i]) == 'S')
                ans *= 3;
            else
                ans *= 2;
        cout << ans << "\n";
    }
    
    return 0;
}