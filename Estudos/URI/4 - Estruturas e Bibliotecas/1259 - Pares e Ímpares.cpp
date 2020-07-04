#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> par, impar;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp % 2 == 0)
            par.push_back(temp);
        else
            impar.push_back(temp);
    }
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());
    for (int i = 0; i < par.size(); i++)
        cout << par[i] << "\n";
    for (int i = impar.size() - 1; i >= 0; i--)
        cout << impar[i] << "\n";

    return 0;
}