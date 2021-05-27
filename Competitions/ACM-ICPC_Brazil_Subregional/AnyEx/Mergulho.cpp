#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int n, r;
    while (cin >> n >> r)
    {
        vector<int> retorna(r);
        for (int i = 0; i < r; i++)
           cin >> retorna[i];

        if (n == r)
            cout << "*\n";
        else
        {
            int aux = 1;
            while (aux <= n)
            {
                bool xx = true;
                for (int i = 0; i < r; i++)
                    if (aux == retorna[i])
                    {
                        xx = false;
                        break;
                    }

                if (xx)
                    cout << aux << " ";
                    
                aux++;
            }
            cout << "\n";
        }
    }

    return 0;
}