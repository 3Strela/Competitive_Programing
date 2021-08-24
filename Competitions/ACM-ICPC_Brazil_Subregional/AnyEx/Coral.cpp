#include <stdio.h>

int main()
{
    double n;
    while (scanf("%lf", &n) != EOF)
    {
        int sm = 0, v[10014], i;
        for (i = 0; i < n; i++)
        {
            scanf("%d", &v[i]);
            sm += v[i];
        }

        int md = sm / n;
        double md_float = sm / n;
        if (md != md_float)
            printf("-1\n");
        else
        {
            int ans = 1;
            for (i = 0; i < n; i++)
                if (v[i] < md)
                    ans += md - v[i];

            printf("%d\n", ans);
        }
    }

    return 0;
}