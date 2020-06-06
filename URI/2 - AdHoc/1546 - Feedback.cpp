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
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                cout << "Rolien\n";
            else if (temp == 2)
                cout << "Naej\n";
            else if (temp == 3)
                cout << "Elehcim\n";
            else if (temp == 4)
                cout << "Odranoel\n";
        }
    }
    
    return 0;
}