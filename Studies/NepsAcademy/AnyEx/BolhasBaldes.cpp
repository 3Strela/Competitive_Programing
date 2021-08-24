#include <bits/stdc++.h>
using namespace std;

int BIT[100005];

int query(int index)
{
    int som = 0;

    while (index > 0)
    {
        som += BIT[index];
        index -= (index & -index);
    }

    return som;
}

void update(int index, int val, int n)
{
    while (index <= n)
    {
        BIT[index] += val;
        index += (index & -index);
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        memset(BIT, 0, sizeof(BIT));

        int inversoes = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            inversoes += query(v[i] - 1);
            update(v[i], 1, n);
        }

        cout << (inversoes % 2 != 0 ? "Marcelo\n" : "Carlos\n");
    }

    return 0;
}