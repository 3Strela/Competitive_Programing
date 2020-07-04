#include <iostream>
#include <cmath>
using namespace std;
int Hanoi(int disc)
{
    return pow(2, disc) - 1;
}
int main()
{
    int ind = 1, disc = 1;
    while (true)
    {
        cin >> disc;
        if (disc == 0)
            break;
        int b = 0, c = 0;
        cout << "Teste " << ind << "\n"
             << Hanoi(disc) << "\n\n";
        ind++;
    }
}