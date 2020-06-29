#include <bits/stdc++.h>
using namespace std;
vector<int> point(100100), guilda(100100);
int find(int x)
{
    if (guilda[x] == x)
        return x;
    return guilda[x] = find(guilda[x]);
}
void join(int x, int y)
{
    int a = find(x), b = find(y);
    guilda[a] = b;
    point[b] += point[a];
}
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 and m == 0)
            break;
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> point[i];
            guilda[i] = i;
        }
        for (int i = 0; i < m; i++)
        {
            int q, a, b;
            cin >> q >> a >> b;
            if (q == 1)
                join(a, b);
            else
            {
                int ga = find(a), gb = find(b), r = find(1);
                if ((point[gb] > point[ga] and gb == r) or (point[ga] > point[gb] and ga == r))
                    ans++;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}