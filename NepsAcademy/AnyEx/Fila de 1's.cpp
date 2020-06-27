#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
bool is_power_of_two(ulli x)
{
    if (x == 0)
        return 0;
    return ((x & (x - 1)) == 0);
}
int main()
{
    ulli n;
    cin >> n;
    if (is_power_of_two(n + 1) and n != 0)
        cout << "S\n";
    else
        cout << "N\n";
        
    return 0;
}