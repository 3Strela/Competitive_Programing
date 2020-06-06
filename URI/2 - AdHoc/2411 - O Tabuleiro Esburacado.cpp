#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, ans = 0, x = 4, y = 3;
    cin >> n;
    vector<int> lista(n);
    for (int i = 0; i < n; i++)
        cin >> lista[i];
    for (int i = 0; i < n; i++)
    {
        if ((x == 1 and y == 3) or (x == 2 and y == 3) or
            (x == 2 and y == 5) or (x == 5 and y == 4))
        {
            ans = n - i;
            break;
        }
        if (lista[i] == 1)
        {
            x++;
            y += 2;
        }
        else if (lista[i] == 2)
        {
            x += 2;
            y++;
        }
        else if (lista[i] == 3)
        {
            x += 2;
            y--;
        }
        else if (lista[i] == 4)
        {
            x++;
            y -= 2;
        }
        else if (lista[i] == 5)
        {
            x--;
            y -= 2;
        }
        else if (lista[i] == 6)
        {
            x -= 2;
            y--;
        }
        else if (lista[i] == 7)
        {
            x -= 2;
            y++;
        }
        else if (lista[i] == 8)
        {
            x--;
            y += 2;
        }
    }
    cout << n - ans << "\n";

    return 0;
}