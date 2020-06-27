#include <iostream>
using namespace std;
int main()
{
    int N, sm = 0;
    cin >> N;

    char a[85], b[85];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];
    for (int i = 0; i < N; i++)
        if (a[i] == b[i])
            sm++;
    cout << sm << "\n";

    return 0;
}