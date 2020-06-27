#include <bits/stdc++.h>
using namespace std;
int inf = 999999999;
int main()
{
    int n, m, xi, yi, yf, xf;
    cin >> n >> m;
    vector<vector<int>> graf(n), dist(n);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            graf[i].push_back(x);
            if (x == 2)
            {
                xi = i;
                yi = j;
                dist[i].push_back(1);
            }
            else
                dist[i].push_back(inf);
            if (x == 3)
            {
                xf = i;
                yf = j;
            }
        }
    stack<pair<int, int>> pilha;
    pilha.push(make_pair(xi, yi));
    while (!pilha.empty())
    {
        int atualI = pilha.top().first, atualJ = pilha.top().second;
        pilha.pop();
        int cima = atualI - 1, direita = atualJ + 1, esquerda = atualJ - 1, baixo = atualI + 1;
        if (cima >= 0 and cima < n and (graf[cima][atualJ] == 1 or graf[cima][atualJ] == 3) and dist[cima][atualJ] == inf)
        {
            pilha.push(make_pair(cima, atualJ));
            dist[cima][atualJ] = dist[atualI][atualJ] + 1;
        }
        if (baixo >= 0 and baixo < n and (graf[baixo][atualJ] == 1 or graf[baixo][atualJ] == 3) and dist[baixo][atualJ] == inf)
        {
            pilha.push(make_pair(baixo, atualJ));
            dist[baixo][atualJ] = dist[atualI][atualJ] + 1;
        }
        if (esquerda >= 0 and esquerda < m and (graf[atualI][esquerda] == 1 or graf[atualI][esquerda] == 3) and dist[atualI][esquerda] == inf)
        {
            pilha.push(make_pair(atualI, esquerda));
            dist[atualI][esquerda] = dist[atualI][atualJ] + 1;
        }
        if (direita >= 0 and direita < m and (graf[atualI][direita] == 1 or graf[atualI][direita] == 3) and dist[atualI][direita] == inf)
        {
            pilha.push(make_pair(atualI, direita));
            dist[atualI][direita] = dist[atualI][atualJ] + 1;
        }
    }
    cout << dist[xf][yf] << "\n";

    return 0;
}