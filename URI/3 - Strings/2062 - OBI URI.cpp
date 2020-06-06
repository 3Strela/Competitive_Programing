#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    string temp;
    vector<string> lista(n);
    for (size_t i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp[temp.size() - 3] == 'O' and temp[temp.size() - 2] == 'B' and temp.size() == 3)
            lista[i] = "OBI";
        else if (temp[temp.size() - 3] == 'U' and temp[temp.size() - 2] == 'R' and temp.size() == 3)
            lista[i] = "URI";
        else
            lista[i] = temp;
    }
    for (int i = 0; i < n; i++)
        if (i == n - 1)
            cout << lista[i] << "\n";
        else
            cout << lista[i] << " ";

    return 0;
}