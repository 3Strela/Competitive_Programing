#include <iostream>
using namespace std;
int main()
{
    int r1[4], r2[4];
    for (int i = 0; i < 4; i++)
        cin >> r1[i];
    for (int i = 0; i < 4; i++)
        cin >> r2[i];
    if (r1[0] > r2[2] or r1[2] < r2[0] or r1[1] > r2[3] or r1[3] < r2[1])
        cout << "0\n";
    else
        cout << "1\n";
        
    return 0;
}