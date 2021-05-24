#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    double ans = 0, ot = b - a;
    for (int i = 1; i <= c; i++)
        ans += pow(ot/b, i-1) * a/b;
    
    printf("%.3lf\n", ans);
    
    return 0;
}
