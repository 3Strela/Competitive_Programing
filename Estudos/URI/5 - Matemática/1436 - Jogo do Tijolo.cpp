#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int t;
        vector<int> id;
        cin >> t;
        for (int j = 0; j < t; j++)
        {
            int a;
            cin >> a;
            id.push_back(a);
        }
        sort(id.begin(), id.end());
        cout << "Case " << i << ": " << id[ceil(id.size() / 2)] << "\n";
    }

    return 0;
}