#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    vector<int> li(6), lr(6);
    int ans = 0;
    for (int i = 0; i < 6; i++)
        cin >> li[i];
    for (int i = 0; i < 6; i++)
        cin >> lr[i];
    for (int i = 0; i < 6; i++)
    {
        if (li[0] == lr[i])
            ans++;
        if (li[1] == lr[i])
            ans++;
        if (li[2] == lr[i])
            ans++;
        if (li[3] == lr[i])
            ans++;
        if (li[4] == lr[i])
            ans++;
        if (li[5] == lr[i])
            ans++;
    }
    if (ans < 3)
        cout << "azar\n";
    else if (ans == 3)
        cout << "terno\n";
    else if (ans == 4)
        cout << "quadra\n";
    else if (ans == 5)
        cout << "quina\n";
    else if (ans == 6)
        cout << "sena\n";

    return 0;
}