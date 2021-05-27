#include <bits/stdc++.h>
using namespace std;

int ans = 0, ati, atj, n, m, s;

int direcao(char x)
{
    if (x == 'N')
        return 1;
    else if (x == 'L')
        return 2;
    else if (x == 'S')
        return 3;
    return 4;
}

int movendo(char x, int di)
{
    if (x == 'D')
        di++;
    else
        di--;

    if (di > 4)
        di = 1;

    if (di < 1)
        di = 4;

    return di;
}

void andando(vector<vector<char>> &ma, int d)
{
    int axi = ati, axj = atj;
    if (d == 1)
        ati--;
    else if (d == 2)
        atj++;
    else if (d == 3)
        ati++;
    else if (d == 4)
        atj--;

    if (ati > n)
        ati = n;
    else if (ati < 1)
        ati = 1;
    if (atj > m)
        atj = m;
    else if (atj < 1)
        atj = 1;

    if (ma[ati][atj] == '*')
    {
        ma[ati][atj] = '.';
        ans++;
    }
    else if (ma[ati][atj] == '#')
        ati = axi, atj = axj;
}

int main()
{
    while (cin >> n >> m >> s)
    {
        if (n == 0 and m == 0 and s == 0)
            break;

        vector<vector<char>> matriz(n + 1, vector<char>(m + 1));

        int dir;
        ans = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                cin >> matriz[i][j];
                if (matriz[i][j] == 'N' or matriz[i][j] == 'S' or matriz[i][j] == 'L' or matriz[i][j] == 'O')
                    ati = i, atj = j, dir = direcao(matriz[i][j]);
            }

        for (int i = 0; i < s; i++)
        {
            char temp;
            cin >> temp;

            if (temp == 'D' or temp == 'E')
                dir = movendo(temp, dir);
            else
            {
                matriz[ati][atj] = 'S';
                andando(matriz, dir);
            }
        }

        cout << ans << "\n";
    }

    return 0;
}
