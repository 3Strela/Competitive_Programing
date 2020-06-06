#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a;
    string b;
    while (cin >> a >> b)
    {
        if (a == 0 and b == "0")
            break;
        string ans;
        bool temNum = false;
        for (int i = 0; i < b.size(); i++)
            if (a != int(b[i]) - 48)
            {
                if (b[i] == '0' and temNum)
                    ans += b[i];
                else if (int(b[i]) >= 49 and int(b[i]) <= 57)
                {
                    ans += b[i];
                    temNum = true;
                }
            }
        if (ans.size() == 0)
            cout << "0\n";
        else
            cout << ans << "\n";
    }

    return 0;
}