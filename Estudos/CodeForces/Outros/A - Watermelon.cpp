#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    (n % 2 == 0 and n != 2) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}