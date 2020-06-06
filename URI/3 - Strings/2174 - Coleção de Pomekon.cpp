#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    unordered_set<string> lista;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        lista.insert(temp);
    }
    cout << "Falta(m) " << 151 - lista.size() << " pomekon(s).\n";

    return 0;
}