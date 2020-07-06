#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d, n;
    while (cin >> n >> d)
    {
        if (d == 0 and n == 0)
            break;

        stack<char> pilha;
        int apagados = 0;

        for (int i = 0; i < n; i++)
        {
            char x;
            cin >> x;

            while (!pilha.empty() and apagados < d and pilha.top() < x)
            {
                pilha.pop();
                apagados++;
            }

            if (pilha.size() < n - d)
                pilha.push(x);
        }

        string ans;
        
        while (!pilha.empty())
        {
            ans += pilha.top();
            pilha.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        cout << ans << "\n";
    }

    return 0;
}
