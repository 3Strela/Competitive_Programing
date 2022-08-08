#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    while (scanf("%d %d %d", &n, &m, &q) != EOF)
    {
        vector<int> idade(n + 1), posicao(n + 1);
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &idade[i]);
            posicao[i] = i;
        }

        vector<vector<int>> list_adj(n + 1);
        vector<vector<int>> antecessor(n + 1, vector<int>(n + 1));
        while (m--)
        {
            int u, v;
            scanf("%d %d", &u, &v);

            list_adj[v].push_back(u);
            antecessor[u][v] = 1;
        }

        for (int k = 1; k <= n; k++)
            for (int i = 1; i <= n; i++)
                if (antecessor[i][k])
                    for (int j = 1; j <= n; j++)
                        antecessor[i][j] |= antecessor[k][j];

        while (q--)
        {
            char tp;
            scanf(" %c", &tp);

            if (tp == 'T')
            {
                int a, b;
                scanf("%d %d", &a, &b);

                swap(idade[posicao[a]], idade[posicao[b]]);
                swap(posicao[a], posicao[b]);
            }
            else if (tp == 'P')
            {
                int x;
                scanf("%d", &x);

                int ans = -1;
                for (int i = 1; i <= n; i++)
                    if (antecessor[i][posicao[x]])
                        if (ans == -1)
                            ans = idade[i];
                        else
                            ans = min(ans, idade[i]);

                if (ans == -1)
                    printf("*\n");
                else
                    printf("%d\n", ans);
            }
        }
    }

    return 0;
}