#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, ans = 0;
        cin >> a;
        for (int i = 1; i <= a; i++)
        {
            int j = 1, aux = 0;
            while (j <= i)
            {
                if (i % j == 0)
                    aux++;
                j++;
            }
            if (aux % 2 == 0)
                ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}