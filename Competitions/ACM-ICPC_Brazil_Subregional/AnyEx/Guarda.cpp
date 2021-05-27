#include <bits/stdc++.h>
using namespace std;

int main()
{
	int d, vf, vg;

	while (cin >> d >> vf >> vg)
	{
		long double v1, v2;

        v1 = 12.0 / double(vf);
		v2 = sqrt(pow(d, 2) + pow(12, 2)) / vg;
		
        cout << (v1 >= v2 ? 'S' : 'N') << "\n";
	}

	return 0;
}