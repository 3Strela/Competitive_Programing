#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int v[3];
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    sort(v, v + 3);
    if (v[1] + v[0] <= v[2])
        cout << "n\n";
    else if (pow(v[2], 2) == pow(v[0], 2) + pow(v[1], 2))
        cout << "r\n";
    else if(pow(v[2], 2) < pow(v[0], 2) + pow(v[1], 2))
        cout << "a\n";
    else if(pow(v[2], 2) > pow(v[0], 2) + pow(v[1], 2))
        cout << "o\n";

    return 0;
}