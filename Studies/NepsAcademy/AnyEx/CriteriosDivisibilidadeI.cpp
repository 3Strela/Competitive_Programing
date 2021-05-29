#include <iostream>
using namespace std;
int main()
{
    string n = "";
    int sm = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '0')
            sm += 0;
        if (n[i] == '1')
            sm += 1;
        if (n[i] == '2')
            sm += 2;
        if (n[i] == '3')
            sm += 3;
        if (n[i] == '4')
            sm += 4;
        if (n[i] == '5')
            sm += 5;
        if (n[i] == '6')
            sm += 6;
        if (n[i] == '7')
            sm += 7;
        if (n[i] == '8')
            sm += 8;
        if (n[i] == '9')
            sm += 9;
    }
    if (n[n.size() - 1] % 2 == 0)
        cout << 'S' << "\n";
    else
        cout << 'N' << "\n";
    if (sm % 3 == 0)
        cout << 'S' << "\n";
    else
        cout << 'N' << "\n";
    if (n[n.size() - 1] == '0' || n[n.size() - 1] == '5')
        cout << 'S' << "\n";
    else
        cout << 'N' << "\n";

    return 0;
}