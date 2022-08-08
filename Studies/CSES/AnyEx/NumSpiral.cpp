#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int lin, col;
        cin >> lin >> col;
 
        ll max_ind = max(lin, col);
        ll curr_spiral = max_ind * max_ind, prev_spiral = (max_ind - 1) * (max_ind - 1);
 
        ll ans;
        if (max_ind % 2 == 1 && max_ind == col)
            ans = curr_spiral - lin + 1;
        else if (max_ind % 2 == 0 && max_ind == lin)
            ans = curr_spiral - col + 1;
        else if (max_ind % 2 == 0 && max_ind == col)
            ans = prev_spiral + lin;
        else if (max_ind % 2 == 1 && max_ind == lin)
            ans = prev_spiral + col;
 
        cout << ans << '\n';
    }
 
    return 0;
}