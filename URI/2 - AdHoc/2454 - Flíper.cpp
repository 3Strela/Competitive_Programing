#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int P, R;
    cin >> P >> R;
    if (P != 0)
    {
        if (R == 0)
            cout << "B\n";
        else
            cout << "A\n";
    }
    else
        cout << "C\n";

    return 0;
}