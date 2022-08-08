#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lin, col;
    cin >> lin >> col;

    vector<vector<string>> quebra_cabeca(lin, vector<string>(col));
    vector<int> linhas(lin), colunas(col);
    set<string> conj_variaveis;
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> quebra_cabeca[i][j];
            conj_variaveis.insert(quebra_cabeca[i][j]);
        }
        cin >> linhas[i];
    }
    for (int j = 0; j < col; j++)
        cin >> colunas[j];

    vector<pair<vector<string>, int>> equacao;

    for (int i = 0; i < lin; i++)
        equacao.push_back({quebra_cabeca[i], linhas[i]});

    for (int j = 0; j < col; j++)
    {
        vector<string> aux;
        for (int i = 0; i < lin; i++)
            aux.push_back(quebra_cabeca[i][j]);

        equacao.push_back({aux, colunas[j]});
    }

    map<string, int> var_val;
    while (!conj_variaveis.empty())
    {
        for (int w = 0; w < equacao.size(); w++)
        {
            vector<string> variaveis = equacao[w].first;
            int valor_eq = equacao[w].second;

            int qtd_vars = 0, freq_var = 0;
            string var = "";

            for (int k = 0; k < variaveis.size(); k++)
            {
                if (var != variaveis[k] and conj_variaveis.find(variaveis[k]) != conj_variaveis.end())
                {
                    var = variaveis[k], qtd_vars++;

                    if (qtd_vars > 1)
                        break;
                }

                if (var == variaveis[k])
                    freq_var++;
            }

            if (qtd_vars == 1)
            {
                int val_var = valor_eq / freq_var;
                for (int i = 0; i < equacao.size(); i++)
                    for (int j = 0; j < equacao[i].first.size(); j++)
                        if (equacao[i].first[j] == var)
                            equacao[i].second -= val_var;

                var_val[var] = val_var;
                conj_variaveis.erase(var);
            }
        }
    }

    for (auto ans : var_val)
        cout << ans.first << " " << ans.second << "\n";

    return 0;
}