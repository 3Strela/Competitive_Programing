#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, bo = 0, ma = 0;
    cin >> n;
    vector<string> lista(n);
    for (int i = 0; i < n; i++)
    {
        char banana;
        cin >> banana >> lista[i];
        if (banana == '+')
            bo++;
        else
            ma++;
    }
    sort(lista.begin(), lista.end());
    for (int i = 0; i < n; i++)
        cout << lista[i] << endl;
    cout << "Se comportaram: " << bo << " | Nao se comportaram: " << ma << "\n";

    return 0;
}