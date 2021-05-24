#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;

    while (cin >> n)
    {
        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
        {
            int gab[5];
            for (int j = 0; j < 5; j++)
                cin >> gab[j];

            vector<string> branco, preto;

            if (gab[0] > 127)
                branco.push_back("A\n");
            else
                preto.push_back("A\n");

            if (gab[1] > 127)
                branco.push_back("B\n");
            else
                preto.push_back("B\n");

            if (gab[2] > 127)
                branco.push_back("C\n");
            else
                preto.push_back("C\n");

            if (gab[3] > 127)
                branco.push_back("D\n");
            else
                preto.push_back("D\n");

            if (gab[4] > 127)
                branco.push_back("E\n");
            else
                preto.push_back("E\n");
                
            if (min(preto.size(), branco.size()) > 1 or min(preto.size(), branco.size()) == 0 or preto.size() == 4)
                cout << "*\n";
            else if (preto.size() < branco.size())
                cout << preto[0];
        }
    }

    return 0;
}