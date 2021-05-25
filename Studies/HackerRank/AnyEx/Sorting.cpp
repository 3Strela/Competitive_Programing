#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int a_i = 0; a_i < n; a_i++)
    {
        cin >> a[a_i];
    }
    // Write Your Code Here
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num_swaps = 0;
        for (int j = 0; j < n - 1; j++)
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                num_swaps++;
                ans++;
            }

        if (num_swaps == 0)
            break;
    }

    printf("Array is sorted in %d swaps.\n", ans);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n\n", a[a.size() - 1]);

    return 0;
}
