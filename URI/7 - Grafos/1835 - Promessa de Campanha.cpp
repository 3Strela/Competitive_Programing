#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ind = 1;
    cin >> n;
    while (n--)
    {
        int nodos, caminhos, ans = 0;
        cin >> nodos >> caminhos;
        vector<vector<int>> adj(nodos + 1);
        for (int i = 0; i < caminhos; i++)
        {
            int in, vin;
            cin >> vin >> in;
            adj[vin].push_back(in);
            adj[in].push_back(vin);
        }
        vector<bool> visit(nodos + 1);
        for (int i = 1; i <= nodos; i++)
        {
            if (visit[i])
                continue;
            else
            {
                ans++;
                queue<int> fila;
                fila.push(i);
                visit[i] = true;
                while (!fila.empty())
                {
                    int paizao = fila.front();
                    fila.pop();
                    for (auto filhos : adj[paizao])
                    {
                        if (visit[filhos])
                            continue;
                        visit[filhos] = true;
                        fila.push(filhos);
                    }
                }
            }
        }
        cout << "Caso #" << ind << ": ";
        if (ans == 1)
            cout << "a promessa foi cumprida\n";
        else
            cout << "ainda falta(m) " << ans - 1 << " estrada(s)\n";
        ind++;
    }

    return 0;
}