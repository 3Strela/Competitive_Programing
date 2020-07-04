#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, ans, qt1 = 1, qt2 = 1;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    for (int i = 1; i < n; i++)
    {
        if (lista[i] == lista[i - 1])
            qt1++;
        else
        {
            qt2 = max(qt1, qt2);
            qt1 = 1;
        }
    }
    ans = max(qt1, qt2);
    cout << ans << "\n";

    return 0;
}