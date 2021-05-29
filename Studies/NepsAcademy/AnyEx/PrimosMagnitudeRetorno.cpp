#include <iostream>
using namespace std;
bool e_composto[100000010];
void crivo(unsigned long long int n)
{
    e_composto[1] = 1;
    for (unsigned long long int i = 2; i <= n; ++i)
        if (!e_composto[i])
            for (int j = 2; j * i <= n; ++j)
                e_composto[i * j] = 1;
    return;
}
int main()
{
    unsigned long long int n;
    cin >> n;
    crivo(n);
    for (unsigned long long int i = 1; i <= n; i++)
        if(e_composto[i]!=1)
            cout << i << " ";
            
    return 0;
}