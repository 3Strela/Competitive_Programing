#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main()
{
    int c, n;
    cin >> c >> n;

    priority_queue<pii, vector<pii>, greater<pii>> fila;

    for (int i = 0; i < n; i++)
    {
        int t, d;
        cin >> t >> d;
        fila.push(pii(t, d));
    }

    int atrasados = 0;
    priority_queue<int, vector<int>, greater<int>> tempoAtual;
    for (int i = 0; i < c; i++)
        tempoAtual.push(0);

    while (!fila.empty())
    {

        int chegada = fila.top().first, demora = fila.top().second;
        fila.pop();

        int tempo = tempoAtual.top();
        tempoAtual.pop();

        if (tempo == 0 or tempo - chegada < 0)
            tempo = chegada;

        if (tempo - chegada > 20)
            atrasados++;

        tempo += demora;
        tempoAtual.push(tempo);
    }

    cout << atrasados << "\n";

    return 0;
}