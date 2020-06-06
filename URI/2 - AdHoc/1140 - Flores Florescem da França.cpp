#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string lin;
    while (getline(cin, lin))
    {
        if (lin == "*")
            break;
        bool ans = true;
        char aux = tolower(lin[0]);
        for (int i = 1; i < lin.size(); i++)
            if (lin[i] == ' ' and tolower(lin[i + 1]) != aux)
            {
                ans = false;
                break;
            }
        if (ans)
            cout << "Y\n";
        else
            cout << "N\n";
    }

    return 0;
}