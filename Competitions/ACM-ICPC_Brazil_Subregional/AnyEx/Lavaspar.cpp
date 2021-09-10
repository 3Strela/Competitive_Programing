#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<char>> greed(n, vector<char>(m));
    vector<vector<set<string>>> visitados(n, vector<set<string>>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> greed[i][j];

    int q;
    cin >> q;

    while (q--)
    {
        string palavra;
        cin >> palavra;

        sort(palavra.begin(), palavra.end());
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                // Direita
                int dif_i = n - palavra.size(), dif_j = m - palavra.size();
                if (j <= dif_j)
                {
                    string anagrama = "";
                    for (int k = j; k < j + palavra.size(); k++)
                        anagrama += greed[i][k];

                    sort(anagrama.begin(), anagrama.end());
                    if (palavra == anagrama)
                        for (int k = j; k < j + palavra.size(); k++)
                            visitados[i][k].insert(palavra);
                }
                // Embaixo
                if (i <= dif_i)
                {
                    string anagrama = "";
                    for (int k = i; k < i + palavra.size(); k++)
                        anagrama += greed[k][j];

                    sort(anagrama.begin(), anagrama.end());

                    if (palavra == anagrama)
                        for (int k = i; k < i + palavra.size(); k++)
                            visitados[k][j].insert(palavra);
                }

                // Diagonal principal
                if (i <= dif_i and j <= dif_j)
                {
                    string anagrama = "";
                    int acres_ind = 0;
                    while (acres_ind != palavra.size())
                        anagrama += greed[i + acres_ind][j + acres_ind], acres_ind++;
                    sort(anagrama.begin(), anagrama.end());

                    if (palavra == anagrama)
                    {
                        int acres_ind = 0;
                        while (acres_ind != palavra.size())
                            visitados[i + acres_ind][j + acres_ind].insert(palavra), acres_ind++;
                    }
                }

                // Diagonal secundaria
                if (i <= dif_i and j >= m - 1 - dif_j)
                {
                    string anagrama = "";
                    int acres_ind = 0;
                    while (acres_ind != palavra.size())
                        anagrama += greed[i + acres_ind][j - acres_ind], acres_ind++;

                    sort(anagrama.begin(), anagrama.end());

                    if (palavra == anagrama)
                    {
                        int acres_ind = 0;
                        while (acres_ind != palavra.size())
                            visitados[i + acres_ind][j - acres_ind].insert(palavra), acres_ind++;
                    }
                }
            }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (visitados[i][j].size() > 1)
                ans++;

    cout << ans << "\n";

    return 0;
}