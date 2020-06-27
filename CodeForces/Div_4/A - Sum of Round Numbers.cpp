#include <bits/stdc++.h>
using namespace std;
void solv()
{
    int n;
    cin >> n;
    int pw = 1;
    vector<int> ans;
    while (n > 0)
    {
        if (n % 10 > 0)
            ans.push_back(n % 10 * pw);
        pw *= 10;
        n /= 10;
    }
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++)
        (i != ans.size() - 1) ? cout << ans[i] << " " : cout << ans[i] << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        solv();
    }
 
    return 0;
}