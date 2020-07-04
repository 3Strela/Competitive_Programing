#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, dx, dy, x, y;
    while (cin >> n)
    {
        if (n == 0)
            break;
        cin >> dx >> dy;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            if (x > dx and y > dy)
                cout << "NE\n";
            else if (x < dx and y > dy)
                cout << "NO\n";
            else if (x < dx and y < dy)
                cout << "SO\n";
            else if (x > dx and y < dy)
                cout << "SE\n";
            else if (x == dx or y == dy)
                cout << "divisa\n";
        }
    }

    return 0;
}