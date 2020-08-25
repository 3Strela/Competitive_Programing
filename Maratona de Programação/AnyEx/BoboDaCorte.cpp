#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, aux;
    cin >> n;

    bool ganhou = true;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (i == 0)
            aux = temp;
        else if (temp > aux)
            ganhou = false;
    }

    cout << (ganhou ? "S\n" : "N\n");

    return 0;
}