#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int n[1000000005], aux[1000000005], a = 0, res[1000000005];
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
        aux[i] = n[i];
    }
    sort(n, n + N);
    for (int i = 0; i < N; i++)
        if (aux[i] != n[i])
        {
            res[a] = n[i];
            a++;
        }
    if (a == 0)
        cout << 0;
    else
    {
        cout << a << "\n";
        for (int i = 0; i < a; i++)
            cout << res[i] << " ";
    }

    return 0;
}