#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    double ans, ot = b - a;
    ans = pow(ot / b, c - 1) * a / b;

    printf("%.3lf\n", ans);

    return 0;
}
