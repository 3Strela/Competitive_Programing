#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    unordered_set<int> lista;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        lista.insert(temp);
    }

    cout << lista.size() << "\n";

    return 0;
}