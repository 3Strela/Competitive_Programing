#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int temp, an1 = 0, an2 = 0;
        for (size_t i = 0; i < n; i++)
        {
            cin >> temp;
            if (temp == 0)
                an1++;
            else if (temp == 1)
                an2++;
        }
        cout << "Mary won " << an1 << " times and John won " << an2 << " times\n";
    }

    return 0;
}