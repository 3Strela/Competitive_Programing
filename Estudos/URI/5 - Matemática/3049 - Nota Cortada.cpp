#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, fx, ma;
    cin >> a >> b;
    fx = (70 * max(a, b)) - ((70 * (max(a, b) - min(a, b))) / 2);
    ma = (70 * 160) - fx;
    if (fx == ma)
        cout << "0\n";
    else if (fx > ma)
        cout << "1\n";
    else if (fx < ma)
        cout << "2\n";
    
    return 0;
}