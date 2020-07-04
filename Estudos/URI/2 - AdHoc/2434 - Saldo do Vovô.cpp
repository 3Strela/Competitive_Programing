#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, S, menor;
    cin >> N >> S;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        S += x;
        if (i == 0)
            menor = S;
        else if (menor > S)
            menor = S;
    }
    cout << menor << "\n";

    return 0;
}