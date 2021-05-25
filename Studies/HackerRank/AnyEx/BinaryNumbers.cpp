#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int ans = 0, ax = 0;
    while (n > 0)
    {
        int rest = n % 2;
        n /= 2;

        if (rest == 1)
            ax++;
        else
            ans = max(ans, ax), ax = 0;
    }
    ans = max(ans, ax);
    cout << ans << "\n";

    return 0;
}
