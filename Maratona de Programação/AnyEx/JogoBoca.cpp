#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    int sm = 0;
    cin >> n;
    
    for (int i = 0; i < n.size(); i++)
        sm += int(n[i]) - 48;
    
    cout << sm % 3 << "\n";

    return 0;
}