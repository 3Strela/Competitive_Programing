#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a;
    cin >> a;
    cout.precision(2);
    cout.setf(ios::fixed);
    if (a >= 0 and a <= 400)
    {
        cout << "Novo salario: " << a + (a * 0.15) << endl
             << "Reajuste ganho: " << a * 0.15 << endl
             << "Em percentual: " << 15 << " %" << endl;
    }
    else if (a > 400 and a <= 800)
    {
        cout << "Novo salario: " << a + (a * 0.12) << endl
             << "Reajuste ganho: " << a * 0.12 << endl
             << "Em percentual: " << 12 << " %" << endl;
    }
    else if (a > 800 and a <= 1200)
    {
        cout << "Novo salario: " << a + (a * 0.10) << endl
             << "Reajuste ganho: " << a * 0.10 << endl
             << "Em percentual: " << 10 << " %" << endl;
    }
    else if (a > 1200 and a <= 2000)
    {
        cout << "Novo salario: " << a + (a * 0.07) << endl
             << "Reajuste ganho: " << a * 0.07 << endl
             << "Em percentual: " << 7 << " %" << endl;
    }
    else if (a > 2000)
    {
        cout << "Novo salario: " << a + (a * 0.04) << endl
             << "Reajuste ganho: " << a * 0.04 << endl
             << "Em percentual: " << 4 << " %" << endl;
    }

    return 0;
}