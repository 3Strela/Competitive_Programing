#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    while (cin >> a >> b >> c)
    {
        if (a == b and a != c)
            cout << "C\n";
        else if (b == c and b != a)
            cout << "A\n";
        else if (c == a and a != b)
            cout << "B\n";
        else
            cout << "*\n";
    }

    return 0;
}