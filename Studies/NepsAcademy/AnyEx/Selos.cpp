#include <iostream>
using namespace std;
bool ehprimo(unsigned long long int n)
{
    if (n == 1)
        return true;
    for (unsigned long long int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    unsigned long long int n;
    cin >> n;
    if (ehprimo(n))
        cout << "N\n";
    else
        cout << "S\n";
    
    return 0;
}