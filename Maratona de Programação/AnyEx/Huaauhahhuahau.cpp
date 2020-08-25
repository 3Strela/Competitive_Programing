#include <iostream>
using namespace std;

int main()
{
    string linha, vogais, vogays;
    cin >> linha;
    
    for (int i = 0; i < linha.size(); i++)
        if (linha[i] == 'a' or linha[i] == 'e' or linha[i] == 'i' or linha[i] == 'o' or linha[i] == 'u')
            vogais += linha[i];
            
    for (int i = vogais.size() - 1; i >= 0; i--)
        vogays += vogais[i];
    
    cout << (vogays == vogais? "S\n" : "N\n");
    
    return 0;
}