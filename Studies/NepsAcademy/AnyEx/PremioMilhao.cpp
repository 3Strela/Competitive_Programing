#include <iostream>
using namespace std;
int main()
{
    int N, i = 1, z = 0, A;
    cin >> N;

    while (N != 0)
    {
        cin >> A;
        z += A;
        if (z < 1000000)
            i++;
        N--;
    }
    cout << i << "\n";

    return 0;
}