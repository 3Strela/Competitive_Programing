#include <iostream>
#include <vector>
using namespace std;
bool e_composto[19900000];
typedef unsigned long long int ulli;
void crivo(ulli n)
{
    e_composto[1] = 1;
    for (ulli i = 2; i * i <= n; i++)
        if (!e_composto[i])
            for (ulli j = 2; j * i <= n; j++)
                e_composto[i * j] = 1;
    return;
}
int main()
{
    ulli n, ans;
    crivo(19900000);
    cin >> n;
    for (ulli i = 1; i <= 19900000; i++)
    {
        if (!e_composto[i])
        {
            ans = i;
            n -= 1;
            if (n == 0)
                break;
        }
    }
    cout << ans << "\n";
    
    return 0;
}