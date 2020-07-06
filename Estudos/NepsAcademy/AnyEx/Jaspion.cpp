#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b;
        map<string, string> tradutor;
        cin >> a >> b;
        cin.ignore();
        for (int i = 0; i < a; i++)
        {
            string jp, br;
            getline(cin, jp);
            getline(cin, br);
            tradutor[jp] = br;
        }
        string frase, ax;
        for (int i = 0; i < b; i++)
        {
            getline(cin, frase);
            ax = "";
            for (int i = 0; i < frase.size(); i++)
            {
                if (frase[i] != ' ')
                    ax += frase[i];
                else
                {
                    if (tradutor.find(ax) != tradutor.end())
                        cout << tradutor[ax];
                    else
                        cout << ax;
                    cout << frase[i];
                    ax = "";
                }
            }
            if (tradutor.find(ax) != tradutor.end())
                cout << tradutor[ax];
            else
                cout << ax;
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}