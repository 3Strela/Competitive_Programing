#include <bits/stdc++.h>
using namespace std;

int main()
{
    double meanA, meanB, ansA, ansB;
    cin >> meanA >> meanB;

    ansA = 160 + 40 * (meanA + pow(meanA, 2));
    ansB = 128 + 40 * (meanB + pow(meanB, 2));

    cout << setprecision(3) << fixed << ansA << "\n";
    cout << setprecision(3) << fixed << ansB << "\n";

    return 0;
}
