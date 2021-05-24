#include <iostream>
using namespace std;
int main()
{
    int n, q[10][10], tlin = 0, tcol = 0, tdgp = 0, tdgs = 0, s = 0, p = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> q[i][j];
            s += q[0][i];
        }
    s = s / n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tlin += q[i][j];
            tcol += q[j][i];
            if (i == j)
                tdgp += q[i][j];
            if (j == n - i - 1)
                tdgs += q[i][j];
        }
        if (tlin == s)
            tlin = 0;
        else
            s = -1;
        if (tcol == s)
            tcol = 0;
        else
            s = -1;
    }
    if (tdgp != s or tdgs != s)
        s = -1;
    cout << s << "\n";

    return 0;
}