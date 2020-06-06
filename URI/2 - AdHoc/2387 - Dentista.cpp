#include <iostream>
#include <algorithm>
#define MAXN 10100
using namespace std;
struct compromisso
{
    int ini, fim;
};
bool compara(compromisso a, compromisso b)
{
    return a.fim < b.fim;
}
compromisso consulta[MAXN];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, x, y, livre, qtd;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> consulta[i].ini >> consulta[i].fim;
    sort(consulta + 1, consulta + n + 1, compara);
    for (int i = 1; i <= n; i++)
        if (consulta[i].ini >= livre)
            livre = consulta[i].fim;
    cout << qtd << "\n";

    return 0;
}