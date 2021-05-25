#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    try
    {
        cout << stoi(S) << "\n";
    }
    catch (invalid_argument)
    {
        cout << "Bad String\n";
    }

    return 0;
}
