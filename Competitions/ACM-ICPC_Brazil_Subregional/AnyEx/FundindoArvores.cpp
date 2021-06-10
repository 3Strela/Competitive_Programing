#include <bits/stdc++.h>
using namespace std;

#define MAXN 10007

struct nodes
{
    int left, right, central;
};

int seqLeftC[MAXN], seqRightC[MAXN];
nodes left_Tree[MAXN], right_Tree[MAXN];

int maxLeftSeqC(nodes tree[], int node)
{
    if (node == 0)
        return 0;

    int &dp = seqLeftC[node];
    if (dp != -1)
        return dp;

    return dp = 1 + maxLeftSeqC(tree, tree[node].central);
}

int maxRightSeqC(nodes tree[], int node)
{
    if (node == 0)
        return 0;

    int &dp = seqRightC[node];
    if (dp != -1)
        return dp;

    return dp = 1 + maxRightSeqC(tree, tree[node].central);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int node, l, c;
        cin >> node >> l >> c;

        seqLeftC[node] = -1;
        left_Tree[node].left = l;
        left_Tree[node].central = c;
        left_Tree[node].right = -1;
    }

    int m;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        int node, r, c;
        cin >> node >> c >> r;

        seqRightC[node] = -1;
        right_Tree[node].left = -1;
        right_Tree[node].central = c;
        right_Tree[node].right = r;
    }

    int maxLeftRoot = maxLeftSeqC(left_Tree, 1), maxLeft = 0;
    for (int i = 1; i <= n; i++)
        maxLeft = max(maxLeft, maxLeftSeqC(left_Tree, i));

    int maxRightRoot = maxRightSeqC(right_Tree, 1), maxRight = 0;
    for (int i = 1; i <= m; i++)
        maxRight = max(maxRight, maxRightSeqC(right_Tree, i));

    int maxLeftSeq = min(maxLeftRoot, maxRight);
    int maxRightSeq = min(maxRightRoot, maxLeft);
    cout << (m + n) - max(maxLeftSeq, maxRightSeq) << "\n";

    return 0;
}