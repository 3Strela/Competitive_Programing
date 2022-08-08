#include <bits/stdc++.h>
using namespace std;

#define MAXN 100030

struct qtd_sim
{
    int homem, elefante, rato;
};

int v[MAXN], lazy[4 * MAXN];
qtd_sim seg[4 * MAXN];

qtd_sim uniao(qtd_sim left_child, qtd_sim right_child)
{
    qtd_sim parent = left_child;

    parent.rato += right_child.rato;
    parent.homem += right_child.homem;
    parent.elefante += right_child.elefante;

    return parent;
}

void build_tree(int node, int left, int right)
{
    if (left == right)
        seg[node].homem = 1, seg[node].rato = seg[node].elefante = 0, lazy[node] = 0;
    else
    {
        int mid = (left + right) / 2;

        build_tree(2 * node, left, mid);
        build_tree(2 * node + 1, mid + 1, right);

        seg[node] = uniao(seg[2 * node], seg[2 * node + 1]);
        lazy[node] = 0;
    }
}

void push_lazy(int node, int left, int right)
{
    if (lazy[node] != 0)
    {
        if (lazy[node] == 1)
        {
            swap(seg[node].homem, seg[node].elefante);
            swap(seg[node].homem, seg[node].rato);
        }
        else if (lazy[node] == 2)
        {
            swap(seg[node].homem, seg[node].rato);
            swap(seg[node].homem, seg[node].elefante);
        }

        if (left != right)
        {
            lazy[2 * node] = (lazy[2 * node] + lazy[node]) % 3;
            lazy[2 * node + 1] = (lazy[2 * node + 1] + lazy[node]) % 3;
        }

        lazy[node] = 0;
    }
}

void atualiza(int node, int left, int right, int a, int b)
{
    push_lazy(node, left, right);

    if (left > b || right < a)
        return;

    if (left >= a && right <= b)
    {
        lazy[node] = 1, push_lazy(node, left, right);
        return;
    }

    int mid = (left + right) / 2;

    atualiza(2 * node, left, mid, a, b);
    atualiza(2 * node + 1, mid + 1, right, a, b);

    seg[node] = uniao(seg[2 * node], seg[2 * node + 1]);
}

qtd_sim consulta(int node, int left, int right, int a, int b)
{
    push_lazy(node, left, right);

    if (left > b || right < a)
    {
        qtd_sim vazio;
        vazio.rato = vazio.homem = vazio.elefante = 0;

        return vazio;
    }

    if (left >= a && right <= b)
        return seg[node];

    int mid = (left + right) / 2;

    qtd_sim left_child = consulta(2 * node, left, mid, a, b);
    qtd_sim right_child = consulta(2 * node + 1, mid + 1, right, a, b);

    qtd_sim parent = uniao(left_child, right_child);

    return parent;
}

int main()
{
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        build_tree(1, 1, n);

        while (m--)
        {
            char op;
            int a, b;
            scanf(" %c %d %d", &op, &a, &b);

            if (op == 'C')
            {
                qtd_sim ans = consulta(1, 1, n, a, b);
                printf("%d %d %d\n", ans.homem, ans.elefante, ans.rato);
            }
            else if (op == 'M')
                atualiza(1, 1, n, a, b);
        }

        printf("\n");
    }

    return 0;
}