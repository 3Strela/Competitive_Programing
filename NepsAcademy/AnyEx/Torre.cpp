#include <iostream>
using namespace std;
int main()
{
    int N, aux, maior = 0, X[1000][1000], somalin[1000], somacol[1000];
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            cin >> X[i][j];
            somalin[i] += X[i][j];
            somacol[j] += X[i][j];
        }
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            aux = (somalin[i] + somacol[j]) - (2 * X[i][j]);
            if (aux > maior)
                maior = aux;
        }
    cout << maior << "\n";

    return 0;
}