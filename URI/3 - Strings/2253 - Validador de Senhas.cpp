#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while (getline(cin, s))
    {
        int minA = 0, mina = 0, minl = 0, ptes = 0;
        for (int i = 0; i < s.size(); i++)
            if (s[i] >= 65 and s[i] <= 90)
                minA = 1;
            else if (s[i] >= 97 and s[i] <= 122)
                mina = 1;
            else if (s[i] >= 48 and s[i] <= 57)
                minl = 1;
            else
                ptes = 1;
        if (minA == 1 and mina == 1 and minl == 1 and ptes == 0 and s.size() >= 6 and s.size() <= 32)
            cout <<"Senha valida.\n";
        else
            cout <<"Senha invalida.\n";
    }

    return 0;
}