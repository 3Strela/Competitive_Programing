#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int par = 0, impar = 0, positivo = 0, negativo = 0;
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            par++;
        else
            impar++;
        if (x > 0)
            positivo++;
        else if (x < 0)
            negativo++;
    }
    cout << par << " valor(es) par(es)\n"
         << impar << " valor(es) impar(es)\n"
         << positivo << " valor(es) positivo(s)\n"
         << negativo << " valor(es) negativo(s)\n";

    return 0;
}