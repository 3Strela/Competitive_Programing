#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    bool bolado = false;
    for (int i = 0; i < s.size(); i++)
        if (tolower(s[i]) == 'z' and tolower(s[i + 1]) == 'e' and tolower(s[i + 2]) == 'l' and tolower(s[i + 3]) == 'd' and tolower(s[i + 4]) == 'a')
        {
            bolado = true;
            break;
        }
    if (bolado)
        cout << "Link Bolado\n";
    else
        cout << "Link Tranquilo\n";

    return 0;
}