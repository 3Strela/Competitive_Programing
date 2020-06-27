#include <iostream>
using namespace std;
int main()
{
    int N, P, Q, result;
    char C;
    cin >> N >> P >> C >> Q;

    if (C == '*')
        result = P * Q;
    else if (C == '+')
        result = P + Q;
    if (N >= result)
        cout << "OK\n";
    else
        cout << "OVERFLOW\n";

    return 0;
}