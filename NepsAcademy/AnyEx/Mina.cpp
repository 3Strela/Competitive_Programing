#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pii;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<vector<int>> matriz(n + 1, vector<int>(n + 1));
    vector<vector<int>> dist(n + 1, vector<int>(n + 1));
    priority_queue<pii, vector<pii>, greater<pii>> fila;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> matriz[i][j];
            dist[i][j] = INT_MAX;
        }
    
    fila.push(pii(1, 1));
    dist[1][1] = 0;
    
    while (!fila.empty())
    {
        int x = fila.top().first, y = fila.top().second;
        int cima = x - 1, baixo = x + 1, esquerda = y - 1, direita = y + 1;
        fila.pop();
        if (cima >= 1 and dist[cima][y] > dist[x][y] + (matriz[cima][y] == 1 ? 1 : 0))
        {
            dist[cima][y] = dist[x][y] + (matriz[cima][y] == 1 ? 1 : 0);
            fila.push(pii(cima, y));
        }
        if (baixo <= n and dist[baixo][y] > dist[x][y] + (matriz[baixo][y] == 1 ? 1 : 0))
        {
            dist[baixo][y] = dist[x][y] + (matriz[baixo][y] == 1 ? 1 : 0);
            fila.push(pii(baixo, y));
        }
        if (esquerda >= 1 and dist[x][esquerda] > dist[x][y] + (matriz[x][esquerda] == 1 ? 1 : 0))
        {
            dist[x][esquerda] = dist[x][y] + (matriz[x][esquerda] == 1 ? 1 : 0);
            fila.push(pii(x, esquerda));
        }
        if (direita <= n and dist[x][direita] > dist[x][y] + (matriz[x][direita] == 1 ? 1 : 0))
        {
            dist[x][direita] = dist[x][y] + (matriz[x][direita] == 1 ? 1 : 0);
            fila.push(pii(x, direita));
        }
    }
    
    cout << dist[n][n] << "\n";

    return 0;
}
