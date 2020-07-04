#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double n1, n2, n3, n4, md;
    cin >> n1 >> n2 >> n3 >> n4;
    cout.precision(1);
    cout.setf(ios::fixed);
    md = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    cout << "Media: " << md << "\n";
    if (md >= 7)
        cout << "Aluno aprovado." << "\n";
    else if (md < 5)
        cout << "Aluno reprovado." << "\n";
    else
    {
        cout << "Aluno em exame." << "\n";
        double x;
        cin >> x;
        cout << "Nota do exame: " << x << "\n";
        if ((md + x) / 2 >= 5)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        cout << "Media final: " << (md + x) / 2 << "\n";
    }

    return 0;
}