#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> vet(n), pilha;
    for (int i = 0; i < n; i++)
        cin >> vet[i];

    for (int i = 0; i < n; i++)
    {
        vector<int>::iterator it = upper_bound(pilha.begin(), pilha.end(), vet[i]);

        if (it == pilha.end())
            pilha.push_back(vet[i]);
        else
            *it = vet[i];
    }

    cout << pilha.size() << "\n";

    return 0;
}