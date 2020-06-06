#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        queue<int> pilha, aux;
        vector<int> lista;
        for (int i = 1; i <= n; i++)
            pilha.push(i);
        while (pilha.size() >= 2)
        {
            lista.push_back(pilha.front());
            pilha.pop();
            pilha.push(pilha.front());
            pilha.pop();
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < lista.size(); i++)
            if (i == lista.size() - 1)
                cout << lista[i] << "\n";
            else
                cout << lista[i] << ", ";
        cout << "Remaining card: " << pilha.front() << "\n";
    }

    return 0;
}