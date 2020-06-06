#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ans = 1;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    for (int i = 0; i < n; i++)
        if (i == 0 and lista[0] > 8)
        {
            ans = 0;
            break;
        }
        else if (lista[i] - lista[i - 1] > 8)
        {
            ans = 0;
            break;
        }
    if (ans)
        cout << "S\n";
    else
        cout << "N\n";
    
    return 0;
}