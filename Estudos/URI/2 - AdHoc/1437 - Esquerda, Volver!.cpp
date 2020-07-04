#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int qtd = 0, qte = 0, qtt = 0;
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            if (s == 'D')
                qtd++;
            else if (s == 'E')
                qte++;
        }
        qtt = max(qtd, qte) - min(qtd, qte);
        if (qtd > qte)
        {
            if (qtt % 4 == 0)
                cout << "N\n";
            else if (qtt % 4 == 1)
                cout << "L\n";
            else if (qtt % 4 == 2)
                cout << "S\n";
            else if (qtt % 4 == 3)
                cout << "O\n";
        }
        else
        {
            if (qtt % 4 == 0)
                cout << "N\n";
            else if (qtt % 4 == 1)
                cout << "O\n";
            else if (qtt % 4 == 2)
                cout << "S\n";
            else if (qtt % 4 == 3)
                cout << "L\n";
        }
    }
    
    return 0;
}