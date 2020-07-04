#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string num;
        cin >> num;
        if (num.size() == 3)
        {
            if (num[0] == 'o' and (num[1] == 'n' or num[2] == 'e'))
                cout << 1 << "\n";
            else if (num[0] != 'o' and num[1] == 'n' and num[2] == 'e')
                cout << 1 << "\n";
            if (num[0] == 't' and (num[1] == 'w' or num[2] == 'o'))
                cout << 2 << "\n";
            else if (num[0] != 't' and num[1] == 'w' and num[2] == 'o')
                cout << 2 << "\n";
        }
        else
            cout << 3 << "\n";
    }

    return 0;
}