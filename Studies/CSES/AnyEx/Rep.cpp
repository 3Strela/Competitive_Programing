#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
 
    int ans = 1, aux = 1;
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            aux++;
        else
            aux = 1;
 
        ans = max(ans, aux);
    }
 
    cout << ans << "\n";
 
    return 0;
}