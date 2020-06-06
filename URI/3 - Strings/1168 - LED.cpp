#include <bits/stdc++.h>
using namespace std;
int converte(char n)
{
    int m;
    if (n == '1')
        m = 2;
    else if (n == '2' or n == '3' or n == '5')
        m = 5;
    else if (n == '4')
        m = 4;
    else if (n == '6' or n == '9' or n == '0')
        m = 6;
    else if (n == '7')
        m = 3;
    else if (n == '8')
        m = 7;
    return m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string l;
        int sm = 0;
        cin >> l;
        for (int i = 0; i < l.size(); i++)
            sm += converte(l[i]);
        cout << sm << " leds\n";
    }
    
    return 0;
}