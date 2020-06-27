#include <iostream>
using namespace std;
int main()
{
    int vet[10], aux;
    for (int i = 0; i < 10; i++)
        cin >> vet[i];
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 9; j++)
            if (vet[j] > vet[j + 1])
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
    for (int i = 0; i < 10; i++)
        cout << vet[i] << " ";
    cout << "\n";
    for (int i = 9; i >= 0; i--)
        cout << vet[i] << " ";

    return 0;
}