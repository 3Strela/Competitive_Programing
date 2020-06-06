#include <iostream>
using namespace std;
bool ehprimo(unsigned long long int n)
{
    if (n == 1)
        return false;
    for (unsigned long long int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        unsigned long long int n;
        cin >> n;
        if (ehprimo(n))
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }

    return 0;
}