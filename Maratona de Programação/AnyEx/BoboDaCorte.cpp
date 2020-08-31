#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n;
    cin >> n;

    int carlin;
    bool conseguiu = true;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (i == 0)
            carlin = temp;
        else if (temp > carlin)
            conseguiu = false;
    }

    cout << (conseguiu ? "S\n" : "N\n");

    return 0;
}