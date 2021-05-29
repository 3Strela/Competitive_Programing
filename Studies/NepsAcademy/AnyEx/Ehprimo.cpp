#include <iostream>
using namespace std;
bool e_primo(unsigned long long int x)
{
    if (x == 1)
        return 0;
    for (unsigned long long int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return 0;
    return 1;
}
int main()
{
    unsigned long long int n;
    cin >> n;
    if (e_primo(n))
        cout << "S\n";
    else
        cout << "N\n";
        
    return 0;
}