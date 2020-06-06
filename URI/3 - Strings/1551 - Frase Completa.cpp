#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    string lin;
    cin >> n;
    cin.ignore();
    for (int j = 0; j < n; j++)
    {
        getline(cin, lin);
        unordered_set<int> letras;
        for (int i = 0; i < lin.size(); i++)
            if (int(tolower(lin[i])) >= 97 and int(tolower(lin[i])) <= 122)
                letras.insert(int(tolower(lin[i])));
        if (letras.size() < 13)
            cout << "frase mal elaborada\n";
        else if (letras.size() >= 13 and letras.size() < 26)
            cout << "frase quase completa\n";
        else
            cout << "frase completa\n";
    }

    return 0;
}