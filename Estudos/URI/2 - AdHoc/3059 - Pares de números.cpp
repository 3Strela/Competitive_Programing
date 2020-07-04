#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, I, F;
    cin >> N >> I >> F;
    int v[N], pares = 0;
    for (int i = 0; i < N; i++)
        cin >> v[i];
    for (int i = 0; i < N; i++)
    {
        int aux = 0;
        while (aux < N)
        {
            int soma = v[i] + v[aux];
            if (soma >= I && soma <= F && i != aux)
                pares++;
            aux++;
        }
    }
    cout << pares / 2 << "\n";

    return 0;
}