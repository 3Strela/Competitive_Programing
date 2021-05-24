#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h, l, ans = 999999999;
    cin >> h >> l;
    vector<vector<int>> graf(h);
    vector<vector<bool>> vis(h);
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
        {
            int x;
            cin >> x;
            graf[i].push_back(x);
            vis[i].push_back(false);
        }
    for (int i = 0; i < h; i++)
        for (int j = 0; j < l; j++)
        {
            if (!vis[i][j])
            {
                vis[i][j] = true;
                queue<pair<int, int>> fila;
                fila.push(make_pair(i, j));
                int num = graf[i][j], pans = 0;
                while (!fila.empty())
                {
                    int ai = fila.front().first, aj = fila.front().second, cima = ai - 1, baixo = ai + 1, direita = aj + 1, esquerda = aj - 1;
                    fila.pop();
                    if (cima >= 0 and cima < h and graf[cima][aj] == num and vis[cima][aj] == false)
                    {
                        fila.push(make_pair(cima, aj));
                        vis[cima][aj] = true;
                    }
                    if (baixo >= 0 and baixo < h and graf[baixo][aj] == num and vis[baixo][aj] == false)
                    {
                        fila.push(make_pair(baixo, aj));
                        vis[baixo][aj] = true;
                    }
                    if (direita >= 0 and direita < l and graf[ai][direita] == num and vis[ai][direita] == false)
                    {
                        fila.push(make_pair(ai, direita));
                        vis[ai][direita] = true;
                    }
                    if (esquerda >= 0 and esquerda < l and graf[ai][esquerda] == num and vis[ai][esquerda] == false)
                    {
                        fila.push(make_pair(ai, esquerda));
                        vis[ai][esquerda] = true;
                    }
                    pans++;
                }
                ans = min(ans, pans);
            }
        }
        
    cout << ans << "\n";

    return 0;
}