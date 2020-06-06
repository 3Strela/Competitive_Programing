#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, qt1 = 0, qt0 = 0, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 1)
            qt1++;
        else
            qt0++;
    }
    if (qt0 > qt1)
        cout << "Y\n";
    else
        cout << "N\n";

    return 0;
}