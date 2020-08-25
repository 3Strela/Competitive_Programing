#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    string s;

    while (cin >> s)
    {
        int ans = 0;
        stack<char> pilha;

        for (int i = 0; i < s.size(); i++)
        {
            if ((!pilha.empty()) and ((s[i] == 'B' and pilha.top() == 'S') or (s[i] == 'S' and pilha.top() == 'B') or
                                      (s[i] == 'C' and pilha.top() == 'F') or (s[i] == 'F' and pilha.top() == 'C')))
            {
                ans++;
                pilha.pop();
            }
            else
                pilha.push(s[i]);
        }

        cout << ans << "\n";
    }

    return 0;
}