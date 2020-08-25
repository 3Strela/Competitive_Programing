#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

#define val first
#define naipe second

int convert_naipe(char c)
{
    if (c == 'C')
        return 0;
    if (c == 'D')
        return 1;
    if (c == 'H')
        return 2;
    return 3;
}

int new_player(int player, int *flag, int p)
{
    if (flag[0] == 1)
        return (player + 1) % p;
    if (player == 0)
        return p - 1;
    return player - 1;
}

int descarte_card(vector<pii> &descarte, vector<vector<pii>> &hand, int player)
{
    pii topo_mao = hand[player][hand[player].size() - 1], topo_desc = descarte[descarte.size() - 1];

    if (topo_mao.val == topo_desc.val || topo_mao.naipe == topo_desc.naipe)
    {
        descarte.push_back(topo_mao);
        hand[player].pop_back();

        return topo_mao.val;
    }

    return 0;
}

int descarte_hand(vector<pii> &descarte, vector<vector<pii>> &hand, int player)
{
    int id_removida, tam = descarte.size() - 1;
    vector<pii> joga_fora;

    for (int i = 0; i < hand[player].size(); i++)
        if (hand[player][i].val == descarte[tam].val || hand[player][i].naipe == descarte[tam].naipe)
            if (joga_fora.size() == 0)
            {
                joga_fora.push_back(hand[player][i]);
                id_removida = i;
            }
            else if (joga_fora[0].val < hand[player][i].val)
            {
                joga_fora.pop_back();

                joga_fora.push_back(hand[player][i]);
                id_removida = i;
            }
            else if (joga_fora[0].val == hand[player][i].val && joga_fora[0].naipe < hand[player][i].naipe)
            {
                joga_fora.pop_back();

                joga_fora.push_back(hand[player][i]);
                id_removida = i;
            }
    if (joga_fora.size() == 0)
        return 0;

    descarte.push_back(joga_fora[0]);
    hand[player].erase(hand[player].begin() + id_removida);

    return joga_fora[0].val;
}

void buy(vector<pii> &saque, vector<vector<pii>> &hand, int player, int *flag)
{
    int tam = saque.size() - 1;

    for (int i = 0; i < flag[2]; i++)
        if (tam >= 0)
        {
            saque.pop_back();
            hand[player].push_back(saque[tam]);

            tam--;
        }
}

void penalize(vector<pii> &saque, vector<vector<pii>> &hand, int player, int card_id, int *flag)
{
    if (card_id == 1)
    {
        flag[2] = 1;
        buy(saque, hand, player, flag);
        flag[2] = 0;
    }
    if (card_id == 7)
    {
        flag[2] = 2;
        buy(saque, hand, player, flag);
        flag[2] = 0;
    }
}

void inverte_sentido(int *flag)
{
    flag[0] = flag[0] * (-1), flag[1] = 0;
}

int jogo(vector<pii> &saque, vector<pii> &descarte, vector<vector<pii>> &hand, int p)
{
    int player, card_descartada, checa_descarte, topo_pilha, tam, flag[3];
    pii aux;

    flag[0] = 1, flag[1] = 1, flag[2] = 0;
    player = 0;
    topo_pilha = descarte[descarte.size() - 1].val;
    while (true)
    {
        aux = descarte[descarte.size() - 1];
        topo_pilha = aux.val;

        if (flag[1] == 1)
        {
            penalize(saque, hand, player, topo_pilha, flag);
            if (topo_pilha == 1 || topo_pilha == 7 || topo_pilha == 11)
            {
                flag[1] = 0;
                player = new_player(player, flag, p);
                continue;
            }
            if (topo_pilha == 12)
                inverte_sentido(flag);
        }
        card_descartada = descarte_hand(descarte, hand, player);

        if (hand[player].size() == 0)
            return player;

        if (card_descartada > 0)
        {
            topo_pilha = card_descartada;

            if (topo_pilha == 1 || topo_pilha == 7 || topo_pilha == 11)
                flag[1] = 1;

            if (topo_pilha == 12)
                inverte_sentido(flag);
        }
        if (card_descartada == 0)
        {
            flag[2] = 1;
            tam = hand[player].size();

            buy(saque, hand, player, flag);
            flag[2] = 0;

            if (hand[player].size() > tam)
            {
                card_descartada = descarte_card(descarte, hand, player);
                if (card_descartada > 0)
                {
                    topo_pilha = card_descartada;
                    if (topo_pilha == 1 || topo_pilha == 7 || topo_pilha == 11)
                        flag[1] = 1;
                    if (topo_pilha == 12)
                        inverte_sentido(flag);
                }
            }
        }

        card_descartada = -1;
        player = new_player(player, flag, p);
    }
}

int main()
{
    int p, m, n;

    while (cin >> p >> m >> n)
    {
        if (p == 0 and m == 0 and n == 0)
            break;
            
        char aux;
        pii element;

        vector<vector<pii>> hand(p);
        for (int i = 0; i < p; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> element.val >> aux;
                element.naipe = convert_naipe(aux);

                hand[i].push_back(element);
            }

        vector<pii> descarte;
        cin >> element.val >> aux;
        element.naipe = convert_naipe(aux);

        descarte.push_back(element);

        vector<pii> saque(n - p * m - 1);
        for (int i = 0; i < n - p * m - 1; i++)
        {
            cin >> element.val >> aux;
            element.naipe = convert_naipe(aux);

            saque[n - p * m - 2 - i] = element;
        }

        cout << jogo(saque, descarte, hand, p) + 1 << "\n";
    }

    return 0;
}