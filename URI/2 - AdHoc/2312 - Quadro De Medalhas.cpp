#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct pais
{
    int ouro, prata, bronze;
    string nome;
};
int arruma(pais a, pais b)
{
    if (a.ouro != b.ouro)
        return a.ouro > b.ouro;
    if (a.prata != b.prata)
        return a.prata > b.prata;
    if (a.bronze != b.bronze)
        return a.bronze > b.bronze;
    return a.nome < b.nome;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    vector<pais> quadro;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        pais t;
        cin >> t.nome >> t.ouro >> t.prata >> t.bronze;
        quadro.push_back(t);
    }
    sort(quadro.begin(), quadro.end(), arruma);
    for (int i = 0; i < n; i++)
        cout << quadro[i].nome << " " << quadro[i].ouro << " " << quadro[i].prata << " " << quadro[i].bronze << "\n";

    return 0;
}