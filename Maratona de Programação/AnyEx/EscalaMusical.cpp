#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    vector<string> notas = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
    vector<int> intervalo_Cerquilha = {2, 2, 1, 2, 2, 2, 1};
    vector<bool> usadas(12);

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;

        usadas[(v - 1) % 12] = true;
    }

    int ans = -1;
    bool taCerto;
    for (int i = 0; i < 12; i++)
    {
        vector<bool> escala(12);
        escala[i] = true;

        int tons = i;
        for (int j = 0; j < 7; j++)
        {
            tons = (tons + intervalo_Cerquilha[j]) % 12;
            escala[tons] = true;
        }

        taCerto = true;

        for (int j = 0; j < 12; j++)
            if (usadas[j] && !escala[j])
            {
                taCerto = false;
                break;
            }

        if (taCerto)
        {
            ans = i;
            break;
        }
    }

    cout << (ans == -1 ? "desafinado" : notas[ans]) << "\n";

    return 0;
}