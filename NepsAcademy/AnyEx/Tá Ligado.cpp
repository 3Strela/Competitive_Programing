#include <bits/stdc++.h>
using namespace std;
int inf = 101;
int main()
{
    int nodos, interacoes;
    vector<int> adj[100003];
    cin >> nodos >> interacoes;

    for (int i = 0; i < interacoes; i++)
    {
        int op, vindo, indo;
        cin >> op >> vindo >> indo;
        if (op == 1)
        {
            adj[vindo].push_back(indo);
            adj[indo].push_back(vindo);
        }
        else
        {
            bool tem = false;
            for (int i = 0; i < adj[vindo].size(); i++)
                if (adj[vindo][i] == indo)
                {
                    tem = true;
                    break;
                }
            if (tem)
                cout << "1\n";
            else
                cout << "0\n";
        }
    }

    return 0;
}