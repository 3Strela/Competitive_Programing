#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    
    cout << ceil(y / double(y - x)) << "\n";

    return 0;
}