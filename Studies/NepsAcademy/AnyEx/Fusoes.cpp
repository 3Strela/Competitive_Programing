#include <bits/stdc++.h>
using namespace std;

vector<int> bancos, peso;
int find(int x)
{
    if (bancos[x] == x)
        return x;
    return bancos[x] = find(bancos[x]);
}
void join(int x, int y)
{
    x = find(x), y = find(y);
    if (x == y)
        return;
    if (peso[x] < peso[y])
        bancos[x] = y;
    if (peso[x] > peso[y])
        bancos[y] = x;
    if (peso[x] == peso[y])
    {
        bancos[x] = y;
        peso[y]++;
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    bancos.resize(n + 1), peso.resize(n + 1);
    for (int i = 1; i <= n; i++)
        bancos[i] = i;
    for (int i = 0; i < k; i++)
    {
        char op;
        int a, b;
        cin >> op >> a >> b;
        if (op == 'C')
        {
            if (find(a) == find(b))
                cout << "S\n";
            else
                cout << "N\n";
        }
        else if (op == 'F')
            join(a, b);
    }

    return 0;
}