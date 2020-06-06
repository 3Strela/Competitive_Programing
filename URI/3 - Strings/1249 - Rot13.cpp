#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string lin;
    while (getline(cin, lin))
    {
        for (int i = 0; i < lin.size(); i++)
            if (lin[i] >= 97 and lin[i] <= 122)
                if (lin[i] + 13 > 122)
                    lin[i] = 96 + ((lin[i] + 13) - 122);
                else
                    lin[i] += 13;
            else if (lin[i] >= 65 and lin[i] <= 90)
                if (lin[i] + 13 > 90)
                    lin[i] = 64 + ((lin[i] + 13) - 90);
                else
                    lin[i] += 13;
        cout << lin << "\n";
    }

    return 0;
}