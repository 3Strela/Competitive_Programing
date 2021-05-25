#include <bits/stdc++.h>
using namespace std;

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    
    while (t--)
    {
        int x;
        cin >> x;
        
        bool is_prime = true;
        for (long long i = 2; i*i <= x; ++i)
            if (x % i == 0)
                is_prime = false;
                
        if (is_prime && x != 1)
            cout << "Prime\n";
        else
            cout << "Not prime\n";
    }

    return 0;
}