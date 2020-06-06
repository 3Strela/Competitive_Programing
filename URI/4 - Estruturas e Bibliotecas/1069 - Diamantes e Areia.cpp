#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string s;
        stack<char> pilha;
        int qt = 0;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
            if (s[i] == '<')
                pilha.push(s[i]);
            else if (s[i] == '>' and !pilha.empty())
            {
                pilha.pop();
                qt++;
            }
        cout << qt << "\n";
    }

    return 0;
}