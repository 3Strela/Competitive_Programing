#include <iostream>
using namespace std;
int main()
{
    int n, x = 0;
    cin >> n;
    int v[10005];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0 && v[i - 1] == 0 && v[i - 2] == 1)
            x++;
    }
    cout << x << "\n";

    return 0;
}