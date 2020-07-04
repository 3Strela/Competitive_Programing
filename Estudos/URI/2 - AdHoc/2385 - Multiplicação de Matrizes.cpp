#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, P, Q, R, S, X, Y, I, J;
    cin >> N >> P >> Q >> R >> S >> X >> Y >> I >> J;
    long long int banana = 0;
    for (int i = 1; i <= N; i++)
        banana += (((P * I) + (Q * i)) % X) * (((R * i) + (S * J)) % Y);
    cout << banana << "\n";

    return 0;
}