#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c, tt = 0;
    bool excedeu = false;
    cin >> n >> c;
    for (int i = 0; i < n; i++)
    {
        int entra, sai;
        cin >> sai >> entra;
        tt += entra - sai;
        if (tt > c)
            excedeu = true;
    }
    if (excedeu)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}