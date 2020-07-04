#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, A, L, P;
    cin >> N >> A >> L >> P;
    if (N <= A && N <= L && N <= P)
        cout << 'S' <<  endl;
    else
        cout << 'N' <<  endl;

    return 0;
}