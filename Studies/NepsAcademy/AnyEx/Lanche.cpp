#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> dist(n + 1, vector<int>(n + 1));

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
			dist[i][j] = (i == j ? 0 : INT_MAX);

	for (int i = 0; i < m; i++)
	{
		int u, v, p;
		cin >> u >> v >> p;

		dist[u][v] = p;
		dist[v][u] = p;
	}
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				if (dist[i][k] < INT_MAX && dist[k][j] < INT_MAX)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);

	int ans = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		int ax = 0;
		for (int j = 1; j <= n; j++)
			ax = max(ax, dist[i][j]);
		ans = min(ans, ax);
	}

	cout << ans << "\n";

	return 0;
}