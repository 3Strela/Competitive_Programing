#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, aux1, aux2;
    cin >> a >> b >> c;
    aux1 = max(b, c);
    aux1 = max(aux1, a);
    aux2 = min(a, c);
    aux2 = min(aux2, b);
    if (a != aux1 and a != aux2)
        cout << a << "\n";
    else if (b != aux1 and b != aux2)
        cout << b << "\n";
    else if (c != aux1 and c != aux2)
        cout << c << "\n";

    return 0;
}