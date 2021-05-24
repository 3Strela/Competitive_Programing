#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mnsm = INT_MAX, mrsm = INT_MIN, sm = 0, ax1 = 0, ax2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ax1 = max(0, ax1 + temp);
        mrsm = max(mrsm, ax1);
        ax2 = min(0, ax2 + temp);
        mnsm = min(mnsm, ax2);
        sm += temp;
    }
    if (sm == mnsm)
        cout << mrsm << "\n";
    else
        cout << max(mrsm, (sm - mnsm)) << "\n";

    return 0;
}