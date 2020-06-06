#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y;
    cin >> x >> y;
    cout << ceil(y / double(y - x)) << "\n";

    return 0;
}