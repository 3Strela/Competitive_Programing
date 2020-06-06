#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string li;
    while (getline(cin, li))
    {
        int q1 = 0, q2 = 0, qt1 = 0, qt2 = 0;
        for (int i = 0; i < li.size(); i++)
            if (li[i] == '(')
                q1++;
            else if (li[i] == ')' and q1 != q2)
                q2++;
            else if (li[i] == '(')
                qt1++;
            else if (li[i] == ')')
                qt2++;
        if (q1 == q2 and qt1 == 0 and qt2 == 0)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }

    return 0;
}