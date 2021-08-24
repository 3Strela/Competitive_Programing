#include <bits/stdc++.h>
using namespace std;

void mergeSort(vector<int> &v)
{
    if (v.size() == 1)
        return;

    vector<int> u1, u2;
    for (int i = 0; i < v.size() / 2; i++)
        u1.push_back(v[i]);
    for (int i = v.size() / 2; i < v.size(); i++)
        u2.push_back(v[i]);

    mergeSort(u1);
    mergeSort(u2);

    u1.push_back(INT_MAX);
    u2.push_back(INT_MAX);

    int indI = 0, indJ = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if (u1[indI] < u2[indJ])
            v[i] = u1[indI++];
        else
            v[i] = u2[indJ++];
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    mergeSort(v);

    for (int i = n - 1; i >= 0; i--)
        cout << v[i] << " ";

    return 0;
}