#include <bits/stdc++.h>
using namespace std;

// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d)
{
    queue<int> fl;
    for (int i = 0; i < a.size(); ++i)
        fl.push(a[i]);

    while (d--)
        fl.push(fl.front()), fl.pop();

    for (int i = 0; i < a.size(); ++i)
        a[i] = fl.front(), fl.pop();

    return a;
}