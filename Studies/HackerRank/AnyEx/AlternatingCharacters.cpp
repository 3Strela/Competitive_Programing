#include <bits/stdc++.h>

using namespace std;

// Complete the alternatingCharacters function below.
int alternatingCharacters(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size() - 1; ++i)
        if (s[i] == s[i + 1])
            ans++;

    return ans;
}
