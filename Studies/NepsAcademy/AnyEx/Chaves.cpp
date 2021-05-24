#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 1;
    cin >> n;
    cin.ignore();
    stack<char> pilha;
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        for (int j = 0; j < s.size(); j++)
            if (s[j] == '{')
                pilha.push('{');
            else if (s[j] == '}')
                if (pilha.empty())
                {
                    ans = 0;
                    break;
                }
                else
                    pilha.pop();
    }
    if (ans and pilha.empty())
        cout << "S\n";
    else
        cout << "N\n";
        
    return 0;
}