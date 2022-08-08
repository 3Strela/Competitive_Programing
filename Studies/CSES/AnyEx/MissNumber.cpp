#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    vector<bool> v(n + 1);
    for (int i = 1; i < n; i++)
    {
        int temp;
        cin >> temp;
 
        v[temp] = true;
    }
 
    for (int i = 1; i <= n; i++)
        if (!v[i])
            cout << i << "\n";
 
    return 0;
}