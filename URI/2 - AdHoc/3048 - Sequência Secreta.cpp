#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, qt = 0, aux = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1 and aux == 1)
        {
            aux = 2;
            qt++;
        }
        if (x == 2 and aux == 2)
        {
            aux = 1;
            qt++;
        }
    }
    cout << qt << "\n";

    return 0;
}