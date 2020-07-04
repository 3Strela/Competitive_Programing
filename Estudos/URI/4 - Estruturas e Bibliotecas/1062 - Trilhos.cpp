#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            return 0;
        }
        while (true)
        {
            stack<int> a, b;
            int temp;
            cin >> temp;
            if (temp == 0)
            {
                cout << "\n";
                break;
            }
            a.push(temp);
            for (int i = 1; i < n; i++)
            {
                cin >> temp;
                a.push(temp);
            }
            int aux = n;
            while (!a.empty())
            {
                if (a.top() == aux)
                    aux--;
                else
                    b.push(a.top());
                a.pop();
                if (!b.empty() and b.top() == aux)
                    while (!b.empty() and b.top() == aux)
                    {
                        b.pop();
                        aux--;
                    }
            }
            while (!b.empty())
            {
                if (b.top() == aux)
                    aux--;
                b.pop();
            }
            if (aux == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }

    return 0;
}