#include <iostream>
#include <vector>
using namespace std;
bool ehprimo(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    int n;
    cin >> n;
    vector<int> primos;
    for (int i = 2; i <= n; i++)
        if (ehprimo(i))
            primos.push_back(i);
    for (int i = 0; i < primos.size(); i++)
        (i == primos.size() - 1 ? cout << primos[i] << "\n" : cout << primos[i] << " ");

    return 0;
}