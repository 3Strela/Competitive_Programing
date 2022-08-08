#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    if (n == 1)
        cout << "1\n";
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION\n";
    else if (n == 4)
        cout << "2 4 1 3\n";
    else
    {
        vector<int> v;
        for (int i = 1; i <= n; i += 2)
            v.push_back(i);
        for (int i = 2; i <= n; i += 2)
            v.push_back(i);
 
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
    }
 
    return 0;
}