#include <bits/stdc++.h>
using namespace std;

// Complete the twoStrings function below.
string twoStrings(string s1, string s2)
{
    map<char, int> mp1, mp2;
    for (int i = 0; i < s1.size(); ++i)
        mp1[s1[i]] += 1;
        
    for (int i = 0; i < s2.size(); ++i)
        mp2[s2[i]] += 1;

    bool ans = false;
    for (auto k : mp1)
        if (mp1[k.first] >= 1 && mp2[k.first] >= 1)
        {
            ans = true;
            break;
        }

    return (ans ? "YES" : "NO");
}