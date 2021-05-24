#include <iostream>
#include <ctype.h>
using namespace std;
string title(string F)
{
    for (int i = 0; i < F.size(); i++)
        if (i == 0)
            F[i] = towupper(F[i]);
        else if (F[i - 1] == ' ')
            F[i] = towupper(F[i]);
        else
            F[i] = towlower(F[i]);

    return F;
}
int main()
{
    string F;

    getline(cin, F);

    cout << title(F) << "\n";

    return 0;
}