#include <iostream>
using namespace std;
int main()
{
    int x, j = 0;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        j++;
        if ((x % j) == 0)
            cout << j << " ";
    }

    return 0;
}