#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int v[n], x[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 0; i < n; i++)
        x[i] = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 1)
            x[i] = x[i] + 1;
        if (v[i - 1] == 1)
            x[i] = x[i] + 1;
        if (v[i + 1] == 1)
            x[i] = x[i] + 1;
    }
    for (int i = 0; i < n; i++)
        cout << x[i] << "\n";

    return 0;
}