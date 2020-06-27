#include <iostream>
using namespace std;
bool div4(string n)
{
    int num = (int(n[n.size() - 1]) - 48);
    if (n.size() > 1)
        num += (int(n[n.size() - 2]) - 48) * 10;
    if ((n[n.size() - 1] == '0' and (n.size() == 1 or n[n.size() - 2] == '0')) or num % 4 == 0)
        return true;
    else
        return false;
}
bool div9(string n)
{
    unsigned long long int sm = 0;
    for (int i = 0; i < n.size(); i++)
        sm += int(n[i]) - 48;
    if (sm % 9 == 0)
        return true;
    else
        return false;
}
bool div25(string n)
{
    if ((n[n.size() - 1] == '0' or n[n.size() - 1] == '5') and (n.size() == 1 or n[n.size() - 2] == '0' or n[n.size() - 2] == '2' or n[n.size() - 2] == '5' or n[n.size() - 2] == '7'))
        return true;
    else
        return false;
}
int main()
{
    string n;
    cin >> n;
    if (div4(n))
        cout << "S\n";
    else
        cout << "N\n";
    if (div9(n))
        cout << "S\n";
    else
        cout << "N\n";
    if (div25(n))
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}