#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> moedas{1, 5, 10, 25, 50, 100};
    int N, qtd = 0;
    cin >> N;
    for (int i = moedas.size() - 1; i >= 0; i--)
    {
        int aux = N / moedas[i];
        N -= aux * moedas[i];
        qtd += aux;
    }
    cout << qtd << "\n";

    return 0;
}