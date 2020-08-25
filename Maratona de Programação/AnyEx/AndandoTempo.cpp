#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    cout << (a == b or c == b or a == c or a == c + b or b == c + a or c == a + b ? "S\n" : "N\n");

    return 0;
}