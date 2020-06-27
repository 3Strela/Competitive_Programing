#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N;
    string aux;
    cin >> N;
    vector<int> n(N + 1), a09(10);
    for (int i = 0; i < N; i++)
    {
        cin >> n[i];
        aux += std::to_string(n[i]);
    }
    for (int i = 0; i < aux.size(); i++)
    {
        if (aux[i] == '0')
            a09[0]++;
        if (aux[i] == '1')
            a09[1]++;
        if (aux[i] == '2')
            a09[2] += 1;
        if (aux[i] == '3')
            a09[3]++;
        if (aux[i] == '4')
            a09[4]++;
        if (aux[i] == '5')
            a09[5]++;
        if (aux[i] == '6')
            a09[6]++;
        if (aux[i] == '7')
            a09[7]++;
        if (aux[i] == '8')
            a09[8]++;
        if (aux[i] == '9')
            a09[9]++;
    }
    for (int i = 0; i < 10; i++)
        cout << i << " - " << a09[i] << "\n";
}