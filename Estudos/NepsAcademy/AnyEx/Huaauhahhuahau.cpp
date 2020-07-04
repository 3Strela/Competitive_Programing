#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    string s, risada, aux;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
            risada += s[i];
    aux = risada;
    reverse(risada.begin(), risada.end());
    cout << (aux == risada? 'S' : 'N') << "\n";

    return 0;
}