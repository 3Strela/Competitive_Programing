#include <bits/stdc++.h>
using namespace std;

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note)
{
    map<string, int> mag, nt;

    for (int i = 0; i < magazine.size(); ++i)
        mag[magazine[i]] += 1;
    for (int i = 0; i < note.size(); ++i)
        nt[note[i]] += 1;

    bool ans = true;
    for (auto k : nt)
        if (mag[k.first] < nt[k.first])
        {
            ans = false;
            break;
        }

    cout << (ans ? "Yes\n" : "No\n");
}