#include <bits/stdc++.h>
using namespace std;

#define MAXN 1013

int BIT[MAXN][MAXN];

int consulta(int x, int y)
{
    int maior = 0;

    for (int i = x; i > 0; i -= i & -i)
        for (int j = y; j > 0; j -= j & -j)
            maior = max(maior, BIT[i][j]);

    return maior;
}

void atualiza(int x, int y, int val)
{
    for (int i = x; i < MAXN; i += i & -i)
        for (int j = y; j < MAXN; j += j & -j)
            BIT[i][j] = max(BIT[i][j], val + 1);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int ans = -1;
        memset(BIT, 0, sizeof(BIT));
        for (int i = 0; i < n; i++)
        {
            int x, y;
            scanf("%d %d", &x, &y);

            int vendedor = consulta(x, y);
            atualiza(x, y, vendedor);

            ans = max(ans, vendedor);
        }

        printf("%d\n", ans + 1);
    }

    return 0;
}