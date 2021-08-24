#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    bool winL = false, winR = false;
    int gameL = 0, ptL = 0, gameR = 0, ptR = 0, vez = 0, p = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'S' && winL == winR)
        {
            if (vez == 0)
                ptL++;
            else
                ptR++;
        }
        else if (s[i] == 'R' && winL == winR)
        {
            if (vez == 0)
                ptR++;
            else
                ptL++;
            vez = (vez == 0 ? 1 : 0);
        }
        else if (s[i] == 'Q')
        {
            if (winL)
                printf("%d (winner) - %d\n", gameL, gameR);
            else if (winR)
                printf("%d - %d (winner)\n", gameL, gameR);
            else if (vez == 0)
                printf("%d (%d*) - %d (%d)\n", gameL, ptL, gameR, ptR);
            else
                printf("%d (%d) - %d (%d*)\n", gameL, ptL, gameR, ptR);
        }
        
        if ((ptL >= 5 && abs(ptL - ptR) >= 2) || ptL == 10)
            gameL++, ptL = 0, ptR = 0;
        else if ((ptR >= 5 && abs(ptL - ptR) >= 2) || ptR == 10)
            gameR++, ptL = 0, ptR = 0;

        if (gameL == 2)
            winL = true;
        else if (gameR == 2)
            winR = true;
    }
    if (p != 1)
        printf("\n");

    return 0;
}