#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int ke;
    string n;
    while (cin >> ke >> n)
    {
        ke = 0;
        for (int i = 0; i < n.size(); i++)
            ke += int(n[i]) - 48;
        if (ke % 3 == 0)
            cout << ke << " sim\n";
        else
            cout << ke << " nao\n";
    }

    return 0;
}