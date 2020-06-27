#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, k;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    cin >> k;
    int a = 0, b;
    while (a <= n - 2)
    {
        int de = a, ate = n - 1;
        while (de <= ate)
        {
            int meio = (de + ate) / 2;
            b = meio;
            if (lista[a] + lista[meio] > k)
                ate = meio - 1;
            else if (lista[a] + lista[meio] < k)
                de = meio + 1;
            else if (lista[a] + lista[meio] == k)
                break;
        }
        if (lista[a] + lista[b] == k)
            break;
        else
            a++;
    }
    cout << lista[a] << " " << lista[b] << "\n";

    return 0;
}