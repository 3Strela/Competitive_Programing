#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n != 0)
    {
        int qt = 0;
        vector<int> loop(n);
        for (int i = 0; i < n; i++)
            cin >> loop[i];
        for (int i = 1; i < n - 1; i++)
            if ((loop[i] > loop[i + 1] and loop[i] > loop[i - 1]) or (loop[i] < loop[i + 1] and loop[i] < loop[i - 1]))
                qt++;
        if ((loop[0] < loop[n - 1] and loop[0] < loop[1]) or (loop[0] > loop[n - 1] and loop[0] > loop[1]))
            qt++;
        if ((loop[n - 1] < loop[0] and loop[n - 1] < loop[n - 2]) or (loop[n - 1] > loop[0] and loop[n - 1] > loop[n - 2]))
            qt++;
        cout << qt << "\n";
        cin >> n;
    }

    return 0;
}