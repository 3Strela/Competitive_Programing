#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n, l, c;
    
	while (cin >> n >> l >> c)
	{
		int ans = 1, linhas = 1, cnt = 0;
		string s;

		for (int i = 0; i < n; i++)
		{
			if (i > 0 and i < n)
				cnt++;

			cin >> s;

			if (s.size() + cnt > c)
			{
				cnt = 0;
				cnt += s.size();
				linhas++;
				//cout << "\n";
			}
			else
				cnt += s.size();
			
            if (linhas > l)
			{
				linhas = 1;
				ans++;
			}
		}

		cout << ans << "\n";
	}

	return 0;
}