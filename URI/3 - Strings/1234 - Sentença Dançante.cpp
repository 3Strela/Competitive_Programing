#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string lin;
    while (getline(cin, lin))
    {
        int qt = 0;
        for (int i = 0; i < lin.size(); i++)
        {
            if (qt % 2 == 0 and lin[i] != ' ')
            {
                if (int(lin[i]) > 90)
                    lin[i] = toupper(lin[i]);
            }
            else if (qt % 2 != 0 and lin[i] != ' ')
            {
                if (int(lin[i]) < 97)
                    lin[i] = towlower(lin[i]);
            }
            else
                qt--;
            qt++;
        }
        cout << lin << "\n";
    }

    return 0;
}