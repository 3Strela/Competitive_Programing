#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    unsigned long long n;
    cin >> n;
 
    while (true)
    {
        cout << n;
        if (n == 1)
        {
            cout << "\n";
            break;
        }
        else
            cout << " ";
 
        if (n & 1)
            n = (3 * n) + 1;
        else
            n /= 2;
    }
 
    return 0;
}