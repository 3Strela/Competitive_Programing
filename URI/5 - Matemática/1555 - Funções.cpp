#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y, caso1, caso2, caso3;
        cin >> x >> y;
        caso1 = ((3 * x) * (3 * x)) + y * y;
        caso2 = (2 * (x * x)) + ((5 * y) * (5 * y));
        caso3 = -100 * x + (y * y * y);
        if (caso1 > caso2 and caso1 > caso3)
            cout << "Rafael ganhou\n";
        if (caso2 > caso1 and caso2 > caso3)
            cout << "Beto ganhou\n";
        if (caso3 > caso2 and caso3 > caso1)
            cout << "Carlos ganhou\n";
    }

    return 0;
}