#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int v[55], x[55];
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