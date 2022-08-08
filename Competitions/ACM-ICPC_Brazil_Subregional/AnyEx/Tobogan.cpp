#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

#define X first
#define Y second

double distPontos(pii A, pii B)
{
    return sqrt(((A.X - B.X) * (A.X - B.X)) + ((A.Y - B.Y) * (A.Y - B.Y)));
}

bool prodEscalar(pii A, pii B)
{
    int prod = (A.X * B.X) + (A.Y * B.Y);
    
    //cout << A.X << " " << A.Y << " || " << B.X << " " << B.X << " = " << prod << '\n';
    
    if (prod >= 0)
        return true;

    return false;
}

double alturaTriangulo(double a, double b, double c)
{
    double sp = (a + b + c) / 2;
    double area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
    double altura = area * 2 / c;
    return altura;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int l, h;
        cin >> l >> h;

        double ans = INT_MAX;
        pii pontoAnterior = {-1, -1};

        int xi = 0;
        for (int i = 0; i < n; i++)
        {
            int yi, xf, yf;
            cin >> yi >> xf >> yf;

            double distToHaste = INT_MAX, distToSegmento = INT_MAX;
            if (xi == 0)
                distToHaste = l - xf;
            else
                distToHaste = xf;

            if (pontoAnterior.X != -1)
            {
                pii vetComp = {pontoAnterior.X - xf, pontoAnterior.Y - yf};
                pii vetAtual = {xi - xf, yi - yf};

                bool menor90graus = prodEscalar(vetComp, vetAtual);
                if (menor90graus)
                {
                    double a = distPontos(pontoAnterior, {xf, yf});
                    double b = distPontos(pontoAnterior, {xi, yi});
                    double c = distPontos({xi, yi}, {xf, yf});

                    distToSegmento = alturaTriangulo(a, b, c);
                }
                else
                    distToSegmento = distPontos(pontoAnterior, {xf, yf});
            }

            ans = min(ans, min(distToHaste, distToSegmento));
            pontoAnterior = {xf, yf};
            xi = l - xi;
        }

        cout << setprecision(2) << fixed << ans << '\n';
    }

    return 0;
}