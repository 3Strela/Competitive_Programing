#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, terra = 0, x, ans;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        terra += x;
        lista[i] = terra;
    }
    for (int i = 0; i < n; i++)
        if (lista[i] == terra / 2)
        {
            ans = i + 1;
            break;
        }
    cout << ans << "\n";

    return 0;
}