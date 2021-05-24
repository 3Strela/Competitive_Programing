#include <iostream>
using namespace std;
int main()
{
    int N, V, x = 0, j, k = 1;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> V;
        if (V != x)
        {
            x = V;
            j = 1;
        }
        else if (k > j)
            j++;
        else
        {
            k = j + 1;
            j++;
        }
    }
    cout << k << "\n";

    return 0;
}