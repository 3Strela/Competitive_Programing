#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, R;
    vector<int> retorna;
    while (cin >> N >> R)
    {
        retorna.erase(retorna.begin(), retorna.end());
        for (int i = 0; i < R; i++)
        {
            int x;
            cin >> x;
            retorna.push_back(x);
        }
        if (N == R)
        {
            cout << "*" << endl;
        }
        else
        {
            int aux = 1;
            while (aux <= N)
            {
                bool xx = true;
                for (int i = 0; i < R; i++)
                {
                    if (aux == retorna[i])
                    {
                        xx = false;
                        break;
                    }
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