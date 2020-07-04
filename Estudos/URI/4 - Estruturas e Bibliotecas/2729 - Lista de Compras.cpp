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
        string l, temp;
        set<string> lista;
        vector<string> ans;
        getline(cin, l);
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] == ' ')
            {
                lista.insert(temp);
                temp = "";
            }
            else if (i == l.size() - 1)
            {
                temp += l[i];
                lista.insert(temp);
            }
            else
                temp += l[i];
        }
        for (auto i : lista)
            ans.push_back(i);
        for (int i = 0; i < ans.size(); i++)
        {
            if (i == ans.size() - 1)
                cout << ans[i] << "\n";
            else
                cout << ans[i] << " ";
        }
    }

    return 0;
}