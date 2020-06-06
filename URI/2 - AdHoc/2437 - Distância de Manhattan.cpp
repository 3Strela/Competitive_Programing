#include <bits/stdc++.h> 
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int xi, yi, xf, yf;
    cin >> xi >> yi >> xf >> yf;
    cout << abs(xf - xi) + abs(yf - yi) << "\n";

    return 0;
}