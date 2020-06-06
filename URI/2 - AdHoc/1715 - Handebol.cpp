#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, ans = 0, temp, gol;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        gol = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            if (temp == 0)
            {
                gol = 1;
            }
        }
        if (gol == 0)
            ans++;
    }
    cout << ans << "\n";

    return 0;
}