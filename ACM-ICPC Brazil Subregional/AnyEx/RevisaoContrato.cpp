#include <bits/stdc++.h>
using namespace std;
int main()
{
    char d;
    string n;
    
    while (cin >> d >> n)
    {
        if (d == '0' and n == "0")
            break;

        string ans;
        bool Add = false;

        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] != d)
                if (n[i] == '0' and Add)
                        ans += n[i];
                else if (n[i] != '0')
                {
                    ans += n[i];
                    Add = true;
                }
        }

        if (ans.size() == 0)
            ans += '0';

        cout << ans << "\n";
    }

    return 0;
}
