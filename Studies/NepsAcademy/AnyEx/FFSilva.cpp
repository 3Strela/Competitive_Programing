#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;

int main()
{
	int nodos, caminhos;
	cin >> nodos >> caminhos;

	vector<vector<pii>> graf(nodos);

	for (int i = 0; i < caminhos; i++)
	{
		int u, v, p;
		cin >> u >> v >> p;

		graf[u].push_back(pii(p, v));
		graf[v].push_back(pii(p, u));
	}

	// PRIM

	vector<int> dist(nodos, INT_MAX);
	vector<bool> visitado(nodos);
	priority_queue<pii, vector<pii>, greater<pii>> fila;

	dist[0] = 0;
	fila.push({dist[0], 0});

	while (true)
	{
		int ax = -1;

		while (!fila.empty())
		{
			int p = fila.top().second;
			fila.pop();

			if (!visitado[p])
			{
				ax = p;
				break;
			}
		}

		if (ax == -1)
			break;

		visitado[ax] = true;

		for (auto filhos : graf[ax])
		{
			int distancia = filhos.first, atual = filhos.second;

			if (dist[atual] > distancia && !visitado[atual])
			{
				dist[atual] = distancia;

				fila.push(pii(dist[atual], atual));
			}
		}
	}

	int somaTree = 0;
	for (auto k : dist)
		somaTree += k;

	cout << somaTree << "\n";

	return 0;
}