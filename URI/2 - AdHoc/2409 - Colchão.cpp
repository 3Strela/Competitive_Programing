#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, h, l, d1, d2, p1, p2;
    cin >> a >> b >> c >> h >> l;
    d1 = min(a, b);
    d1 = min(d1, c);
    d2 = max(a, b);
    d2 = max(d2, c);
    if (a != d2 and a != d1)
        d2 = a;
    else if (b != d2 and b != d1)
        d2 = b;
    else if (c != d2 and c != d1)
        d2 = c;
    p1 = min(h, l);
    p2 = max(h, l);
    if (d1 <= p1 and d2 <= p2)
        cout << "S\n";
    else
        cout << "N\n";
    
    return 0;
}