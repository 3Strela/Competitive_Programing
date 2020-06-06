#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> b >> a;
        if ((a == "tesoura" and b == "papel") or (a == "tesoura" and b == "lagarto"))
            cout << "sheldon\n";
        if ((b == "tesoura" and a == "papel") or (b == "tesoura" and a == "lagarto"))
            cout << "rajesh\n";
        if ((a == "papel" and b == "pedra") or (a == "papel" and b == "spock"))
            cout << "sheldon\n";
        if ((b == "papel" and a == "pedra") or (b == "papel" and a == "spock"))
            cout << "rajesh\n";
        if ((a == "pedra" and b == "lagarto") or (a == "pedra" and b == "tesoura"))
            cout << "sheldon\n";
        if ((b == "pedra" and a == "lagarto") or (b == "pedra" and a == "tesoura"))
            cout << "rajesh\n";
        if ((a == "lagarto" and b == "spock") or (a == "lagarto" and b == "papel"))
            cout << "sheldon\n";
        if ((b == "lagarto" and a == "spock") or (b == "lagarto" and a == "papel"))
            cout << "rajesh\n";
        if ((a == "spock" and b == "tesoura") or (a == "Spock" and b == "pedra"))
            cout << "sheldon\n";
        if ((b == "spock" and a == "tesoura") or (b == "Spock" and a == "pedra"))
            cout << "rajesh\n";
        if (a == b)
            cout << "empate\n";
    }

    return 0;
}