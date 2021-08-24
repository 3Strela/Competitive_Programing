#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (scanf("%d", &n) != EOF)
    {
        vector<int> larg(n), cheg(n);
        for (int i = 0; i < n; i++)
            scanf("%d", &larg[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &cheg[i]);
        
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
            if (cheg[i] != larg[i])
            {
                int find_ind = i + 1;
                for (int j = i; j < n; j++)
                    if (cheg[i] == larg[j])
                    {
                        find_ind = j;
                        break;
                    }

                for (int j = find_ind; j > i; j--)
                    swap(larg[j], larg[j - 1]), ans++;
            }
        printf("%d\n", ans);
    }

    return 0;
}