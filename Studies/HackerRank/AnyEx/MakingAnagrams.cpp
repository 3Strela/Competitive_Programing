#include <bits/stdc++.h>
using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b)
{
    map<char, int> s1, s2;
    for (int i = 0; i < a.size(); ++i)
        s1[a[i]] += 1;
    for (int i = 0; i < b.size(); ++i)
        s2[b[i]] += 1;

    int ans = 0;
    for (int i = 'a'; i <= 'z'; ++i)
        if (s1[i] != s2[i])
            ans += abs(s1[i] - s2[i]);

    return ans;
}