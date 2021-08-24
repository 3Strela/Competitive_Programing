#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    bool taCerto = true;
    vector<vector<bool>> matriz(11, vector<bool>(11));
    while (n--)
    {
        int d, l, r, c;
        cin >> d >> l >> r >> c;

        if (d == 0)
            for (int i = c; i < c + l; i++)
                if (i > 10 or matriz[r][i])
                    taCerto = false;
                else
                    matriz[r][i] = true;

        else
            for (int i = r; i < r + l; i++)
                if (i > 10 or matriz[i][c])
                    taCerto = false;
                else
                    matriz[i][c] = true;
    }

    cout << (taCerto ? "Y\n" : "N\n");

    return 0;
}
