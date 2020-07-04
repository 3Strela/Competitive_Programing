#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int temp, cres = 0, decres = 0, aux;
    for (int i = 0; i < 5; i++)
    {
        cin >> temp;
        if (i == 0)
            aux = temp;
        else if (temp > aux)
        {
            cres = 1;
            aux = temp;
        }
        else if (temp < aux)
        {
            decres = 1;
            aux = temp;
        }
    }
    if (cres == 1 and decres == 0)
        cout << "C\n";
    else if (cres == 0 and decres == 1)
        cout << "D\n";
    else
        cout << "N\n";

    return 0;
}