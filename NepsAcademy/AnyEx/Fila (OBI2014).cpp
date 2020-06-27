#include <iostream>
using namespace std;
int resolve(int a[], int b[], int i, int M)
{
    int aux = 0;
    while (aux < M)
    {
        if (a[i] == b[aux])
            return false;
        aux++;
    }
    return true;
}
int main()
{
    int N, M, a[50005], b[50005];
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    cin >> M;
    for (int i = 0; i < M; i++)
        cin >> b[i];
    for (int i = 0; i < N; i++)
    {
        if (resolve(a, b, i, M))
            cout << a[i] << " ";
    }

    return 0;
}