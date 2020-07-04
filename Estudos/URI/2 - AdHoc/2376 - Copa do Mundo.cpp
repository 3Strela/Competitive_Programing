#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<char> fila;
    fila.push('A');
    fila.push('B');
    fila.push('C');
    fila.push('D');
    fila.push('E');
    fila.push('F');
    fila.push('G');
    fila.push('H');
    fila.push('I');
    fila.push('J');
    fila.push('K');
    fila.push('L');
    fila.push('M');
    fila.push('N');
    fila.push('O');
    fila.push('P');
    while (fila.size() != 1)
    {
        int n, m;
        cin >> n >> m;
        if (n > m)
        {
            fila.push(fila.front());
            fila.pop();
            fila.pop();
        }
        else
        {
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }
    }
    cout << fila.front() << "\n";

    return 0;
}