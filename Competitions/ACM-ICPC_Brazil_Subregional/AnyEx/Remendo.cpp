#include <bits/stdc++.h>
using namespace std;

int memo[1005];
int n, c, t1, t2;

int solv(int left, vector<int> pneu)
{
    int right = pneu.size();

    if (left == right)
        return min(t1, t2);

    if (left > right)
        return 0;

    int &dp = memo[left];
    if (dp != -1)
        return dp;

    int caso_1 = t1, ind_1 = left;
    while (caso_1 > 0 && ind_1 < right)
        caso_1 -= pneu[ind_1], ind_1++;
    if (caso_1 >= 0)
        ind_1++;

    int caso_2 = t2, ind_2 = left;
    while (caso_2 > 0 && ind_2 < right)
        caso_2 -= pneu[ind_2], ind_2++;
    if (caso_2 >= 0)
        ind_2++;

    return dp = min(t1 + solv(ind_1, pneu), t2 + solv(ind_2, pneu));
}

int main()
{
    while (cin >> n >> c >> t1 >> t2)
    {
        vector<int> furo(n);
        for (int i = 0; i < n; i++)
            cin >> furo[i];

        int maior_dif = -1, ind_maior = -1;
        vector<int> diferenca;
        for (int i = 1; i < n; i++)
        {
            int furos_dif = furo[i] - furo[i - 1];
            diferenca.push_back(furos_dif);

            if (furos_dif > maior_dif)
                maior_dif = furos_dif, ind_maior = i - 1;

            if (i == n - 1)
            {
                furos_dif = c - furo[i] + furo[0];
                diferenca.push_back(furos_dif);

                if (furos_dif > maior_dif)
                    maior_dif = furos_dif, ind_maior = diferenca.size() - 1;
            }
        }

        vector<int> pneu;
        for (int i = ind_maior + 1; i < diferenca.size(); i++)
            pneu.push_back(diferenca[i]);
        for (int i = 0; i < ind_maior; i++)
            pneu.push_back(diferenca[i]);

        memset(memo, -1, sizeof(memo));

        cout << solv(0, pneu) << "\n";
    }

    return 0;
}