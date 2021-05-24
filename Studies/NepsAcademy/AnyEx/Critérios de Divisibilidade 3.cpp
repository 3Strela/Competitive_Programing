#include <iostream>
using namespace std;
bool div11(string n)
{
    int impar = 0, par = 0, ans;
    for (int i = 0; i < n.size(); i++)
    {
        if ((i + 1) % 2 == 0)
            par += (int(n[i]) - 48);
        else
            impar += (int(n[i]) - 48);
    }
    ans = impar - par;
    if (ans % 11 == 0)
        return true;
    else
        return false;
}
int main()
{
    string n;
    cin >> n;
    if (div11(n))
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}