#include <bits/stdc++.h>
using namespace std;
struct Pilotos
{
    int id;
    int pontos;
};
bool comparaPilotos(Pilotos a, Pilotos b)
{
    return a.pontos > b.pontos;
}
int main()
{
    int numPremios, numPilotos, x, indice, auxIndice;
    cin >> numPremios >> numPilotos;
    
    Pilotos pilotos[110];
    for (int i = 0; i < 110; i++)
    {
        pilotos[i].id = i + 1;
        pilotos[i].pontos = 0;
    }
    int colocacao[110][110], numSistemasPontos, k, ponto;
    while (numPremios != 0 && numPilotos != 0)
    {
        for (int i = 0; i < numPremios; i++)
            for (int j = 0; j < numPilotos; j++)
                cin >> colocacao[i][j];
        cin >> numSistemasPontos;
        for (int i = 0; i < numSistemasPontos; i++)
        {
            cin >> k;
            auxIndice = 0;
            for (int j = 0; j < k; j++)
            {
                cin >> ponto;
                auxIndice++;
                for (int z = 0; z < numPremios; z++)
                {
                    for (int w = 0; w < numPilotos; w++)
                        if (colocacao[z][w] == auxIndice)
                        {
                            indice = w;
                            break;
                        }
                    pilotos[indice].pontos += ponto;
                }
            }
            sort(pilotos, pilotos + numPilotos, comparaPilotos);
            int vencedores[numPilotos], numVencedores = 1;
            vencedores[0] = pilotos[0].id;
            for (x = 1; x < numPilotos; x++)
            {
                if (pilotos[x].pontos == pilotos[0].pontos)
                {
                    numVencedores++;
                    vencedores[numVencedores - 1] = pilotos[x].id;
                }
            }

            sort(vencedores, vencedores + numVencedores);

            for (x = 0; x < numVencedores; x++)
                (x < numVencedores - 1) ? cout << vencedores[x] << " " : cout << vencedores[x] << "\n";
            for (int y = 0; y < 110; y++)
            {
                pilotos[y].id = y + 1;
                pilotos[y].pontos = 0;
            }
        }
        cin >> numPremios >> numPilotos;
    }
    cout << "\n";

    return 0;
}