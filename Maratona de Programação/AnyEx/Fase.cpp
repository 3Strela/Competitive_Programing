#include <bits/stdc++.h>
using namespace std;

bool ord(int x, int y)
{
    return x > y;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> vet(n);
    for (int i = 0; i < n; i++)
        cin >> vet[i];

    sort(vet.begin(), vet.end(), ord);

    while (vet[k - 1] == vet[k])
        k++;

    cout << k << "\n";

    return 0;
}