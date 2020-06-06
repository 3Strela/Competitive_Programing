#include <bits/stdc++.h>
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, M;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
        cin >> a[i];
    cin >> M;
    int b[M];
    for (int i = 0; i < M; i++)
        cin >> b[i];
    vector<int> lista;
    for (int i = 0; i < N; i++)
        if (resolve(a, b, i, M))
            lista.push_back(a[i]);
    for (int i = 0; i < lista.size(); i++)
        if (i == lista.size() - 1)
            cout << lista[i] << endl;
        else
            cout << lista[i] << " ";

    return 0;
}