#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    while (getline(cin, s))
    {
        if (s == "brasil" or s == "portugal")
            cout << "Feliz Natal!\n";
        else if (s == "alemanha")
            cout << "Frohliche Weihnachten!\n";
        else if (s == "austria")
            cout << "Frohe Weihnacht!\n";
        else if (s == "coreia")
            cout << "Chuk Sung Tan!\n";
        else if (s == "espanha" or s == "argentina" or s == "chile" or s == "mexico")
            cout << "Feliz Navidad!\n";
        else if (s == "grecia")
            cout << "Kala Christougena!\n";
        else if (s == "estados-unidos" or s == "inglaterra" or s == "australia" or s == "antardida" or s == "canada")
            cout << "Merry Christmas!\n";
        else if (s == "suecia")
            cout << "God Jul!\n";
        else if (s == "turquia")
            cout << "Mutlu Noeller\n";
        else if (s == "irlanda")
            cout << "Nollaig Shona Dhuit!\n";
        else if (s == "belgica")
            cout << "Zalig Kerstfeest!\n";
        else if (s == "italia" or s == "libia")
            cout << "Buon Natale!\n";
        else if (s == "siria" or s == "marrocos")
            cout << "Milad Mubarak!\n";
        else if (s == "japao")
            cout << "Merii Kurisumasu!\n";
        else
            cout << "--- NOT FOUND ---\n";
    }

    return 0;
}