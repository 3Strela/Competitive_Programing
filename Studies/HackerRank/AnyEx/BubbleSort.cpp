#include <bits/stdc++.h>
using namespace std;

/*
 * Complete the 'countSwaps' function below.
 *
 * The function accepts INTEGER_ARRAY a as parameter.
 */

void countSwaps(vector<int> a)
{
    int sz = a.size(), qt_swp = 0;
    for (int i = 0; i < sz; ++i)
        for (int j = 0; j < sz - 1; ++j)
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]), qt_swp++;

    printf("Array is sorted in %d swaps.\n", qt_swp);
    printf("First Element: %d\n", a[0]);
    printf("Last Element: %d\n", a[sz - 1]);
}