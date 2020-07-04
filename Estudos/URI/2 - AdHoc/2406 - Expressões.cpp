#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string l;
        cin >> l;
        stack<char> cadeia;
        bool taCerto = true;
        for (int i = 0; i < l.size(); i++)
            if (l[i] == '{' or l[i] == '[' or l[i] == '(')
                cadeia.push(l[i]);
            else if (!cadeia.empty())
            {
                if ((cadeia.top() == '{' and l[i] == '}') or
                    (cadeia.top() == '[' and l[i] == ']') or
                    (cadeia.top() == '(' and l[i] == ')'))
                    cadeia.pop();
                else
                {
                    taCerto = false;
                    break;
                }
            }
            else
            {
                taCerto = false;
                break;
            }
        if (taCerto and cadeia.empty())
            cout << "S\n";
        else
            cout << "N\n";
    }

    return 0;
}