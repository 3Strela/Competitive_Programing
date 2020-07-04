#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string linha, vogais, vogays;
    cin >> linha;
    for (int i = 0; i < linha.size(); i++)
    {
        if (linha[i] == 'a')
            vogais += 'a';
        if (linha[i] == 'e')
            vogais += 'e';
        if (linha[i] == 'i')
            vogais += 'i';
        if (linha[i] == 'o')
            vogais += 'o';
        if (linha[i] == 'u')
            vogais += 'u';
    }
    for (int i = vogais.size() - 1; i >= 0; i--)
        vogays += vogais[i];
    if (vogays == vogais)
        cout << 'S' << endl;
    else
        cout << 'N' << endl;

    return 0;
}