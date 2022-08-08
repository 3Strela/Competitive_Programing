#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    int last = -1;
    unsigned long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        int curr;
        cin >> curr;
 
        if (last > curr && last != -1)
            ans += last - curr, last = curr + (last - curr);
        else
            last = curr;
    }
 
    cout << ans << "\n";
 
    return 0;
}