#include <bits/stdc++.h>
using namespace std;
void solv()
{
    int a, b, op1, op2, ans;
    cin >> a >> b;
    op1 = max(2 * a, b);
    op2 = max(2 * b, a);
    cout << pow(min(op1, op2), 2) << "\n";
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