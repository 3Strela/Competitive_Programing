#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t;
    cin >> n >> t;
    vector<pair<int, string>> alunos;
    for (int i = 0; i < n; i++)
    {
        int hab;
        string nom;
        cin >> nom >> hab;
        alunos.push_back(pair<int, string>(-hab, nom));
    }
    sort(alunos.begin(), alunos.end());
    for (int i = 1; i <= t; i++)
    {
        cout << "Time " << i << endl;
        vector<string> times;
        for (int j = i - 1; j < n; j += t)
            times.push_back(alunos[j].second);
        sort(times.begin(), times.end());
        for (int j = 0; j < times.size(); j++)
            cout << times[j] << "\n";
        if (i < t)
            cout << "\n";
    }

    return 0;
}