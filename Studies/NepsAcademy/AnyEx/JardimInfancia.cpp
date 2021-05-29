#include <bits/stdc++.h>
using namespace std;

int x[8], y[8];

int dist(int a, int b)
{
    return pow(x[a] - x[b], 2) + pow(y[a] - y[b], 2);
}

int cross(int a, int b, int k)
{
    return (x[b] - x[a]) * (y[k] - y[a]) - (x[k] - x[a]) * (y[b] - y[a]);
}

int main()
{
    for (int i = 1; i <= 7; i++)
        cin >> x[i] >> y[i];

    if (dist(1, 2) + dist(1, 3) <= dist(2, 3))
        cout << "N\n";
    else if (dist(1, 2) != dist(1, 3))
        cout << "N\n";
    else if (cross(2, 3, 4) != 0 or cross(2, 3, 5) != 0)
        cout << "N\n";
    else if (x[2] + x[3] != x[4] + x[5] or y[2] + y[3] != y[4] + y[5])
        cout << "N\n";
    else if (dist(2, 3) <= dist(4, 5))
        cout << "N\n";
    else if (dist(2, 6) != dist(2, 4) + dist(4, 6) or dist(3, 7) != dist(3, 5) + dist(5, 7))
        cout << "N\n";
    else if (dist(5, 7) != dist(4, 6))
        cout << "N\n";
    else if ((cross(2, 3, 1) < 0 and cross(2, 3, 6) < 0) or (cross(2, 3, 1) > 0 and cross(2, 3, 6) > 0) or (cross(2, 3, 1) == 0 and cross(2, 3, 6) == 0))
        cout << "N\n";
    else
        cout << "S\n";

    return 0;
}