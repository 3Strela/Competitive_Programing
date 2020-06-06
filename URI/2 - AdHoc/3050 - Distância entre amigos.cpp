#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, mr = 0;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (mr < lista[i] + lista[j] + (j - i))
                mr = lista[i] + lista[j] + (j - i);
    cout << mr << "\n";

    return 0;
}