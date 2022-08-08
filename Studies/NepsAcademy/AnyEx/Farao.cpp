#include <bits/stdc++.h>
using namespace std;

#define MAXN 100013

struct node
{
    int sum, qtd;
    int prefix_sum, qtd_prefix;
    int suffix_sum, qtd_suffix;
    int max_sum, qtd_max_sum;
};

int banco[MAXN];
node tree[4 * MAXN];

node merge(node &left, node &right)
{
    node curr;
    curr.sum = left.sum + right.sum;
    curr.qtd = left.qtd + right.qtd;

    if (left.sum + right.prefix_sum > left.prefix_sum)
    {
        curr.prefix_sum = left.sum + right.prefix_sum;
        curr.qtd_prefix = left.qtd + right.qtd_prefix;
    }
    else if (left.sum + right.prefix_sum < left.prefix_sum)
    {
        curr.prefix_sum = left.prefix_sum;
        curr.qtd_prefix = left.qtd_prefix;
    }
    else
    {
        curr.prefix_sum = left.prefix_sum;
        curr.qtd_prefix = max(left.qtd + right.qtd_prefix, left.qtd_prefix);
    }

    if (right.sum + left.suffix_sum > right.suffix_sum)
    {
        curr.suffix_sum = right.sum + left.suffix_sum;
        curr.qtd_suffix = right.qtd + left.qtd_suffix;
    }
    else if (right.sum + left.suffix_sum < right.suffix_sum)
    {
        curr.suffix_sum = right.suffix_sum;
        curr.qtd_suffix = right.qtd_suffix;
    }
    else
    {
        curr.suffix_sum = right.suffix_sum;
        curr.qtd_suffix = max(right.qtd + left.qtd_suffix, right.qtd_suffix);
    }

    if (left.max_sum > right.max_sum)
    {
        if (left.suffix_sum + right.prefix_sum > left.max_sum)
        {
            curr.max_sum = left.suffix_sum + right.prefix_sum;
            curr.qtd_max_sum = left.qtd_suffix + right.qtd_prefix;
        }
        else if (left.suffix_sum + right.prefix_sum < left.max_sum)
        {
            curr.max_sum = left.max_sum;
            curr.qtd_max_sum = left.qtd_max_sum;
        }
        else
        {
            curr.max_sum = left.max_sum;
            curr.qtd_max_sum = max(left.qtd_suffix + right.qtd_prefix, left.qtd_max_sum);
        }
    }
    else
    {
        if (left.suffix_sum + right.prefix_sum > right.max_sum)
        {
            curr.max_sum = left.suffix_sum + right.prefix_sum;
            curr.qtd_max_sum = left.qtd_suffix + right.qtd_prefix;
        }
        else if (left.suffix_sum + right.prefix_sum < right.max_sum)
        {
            curr.max_sum = right.max_sum;
            curr.qtd_max_sum = right.qtd_max_sum;
        }
        else
        {
            curr.max_sum = right.max_sum;
            curr.qtd_max_sum = max(left.qtd_suffix + right.qtd_prefix, right.qtd_max_sum);
        }
    }

    return curr;
}

void build(int no, int left, int right)
{
    if (left == right)
    {
        tree[no].sum = tree[no].prefix_sum = tree[no].suffix_sum = tree[no].max_sum = banco[left];
        tree[no].qtd = tree[no].qtd_prefix = tree[no].qtd_suffix = tree[no].qtd_max_sum = 1;
    }
    else
    {
        int mid = (left + right) / 2;

        build(2 * no, left, mid);
        build(2 * no + 1, mid + 1, right);

        tree[no] = merge(tree[2 * no], tree[2 * no + 1]);
    }
}

node query(int no, int left, int right, int a, int b)
{
    if (left == a && right == b)
        return tree[no];

    int mid = (left + right) / 2;

    if (a > mid)
        return query(2 * no + 1, mid + 1, right, a, b);
    if (b <= mid)
        return query(2 * no, left, mid, a, b);

    node left_child = query(2 * no, left, mid, a, mid);
    node right_child = query(2 * no + 1, mid + 1, right, mid + 1, b);

    node res = merge(left_child, right_child);

    return res;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        memset(banco, -1, sizeof(banco));
        for (int i = 1; i <= n; i++)
            scanf("%d", &banco[i]);

        memset(tree, -1, sizeof(tree));
        build(1, 1, n);

        int q;
        scanf("%d", &q);

        while (q--)
        {
            int a, b;
            scanf("%d %d", &a, &b);

            node ans = query(1, 1, n, a, b);
            printf("%d %d\n", ans.max_sum, ans.qtd_max_sum);
        }
    }

    return 0;
}