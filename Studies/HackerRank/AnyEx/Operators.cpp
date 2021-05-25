#include <bits/stdc++.h>
using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) 
{
    double ans = meal_cost;
    
    ans += (tip_percent/100.00) * meal_cost;
    ans += (tax_percent/100.00) * meal_cost;

    cout << round(ans) << "\n";
}