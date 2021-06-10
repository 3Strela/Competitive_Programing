/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};
*/

int height(Node *root)
{
    if (root->left == NULL && root->right == NULL)
        return 0;
    int lef = 0, rig = 0;

    if (root->left != NULL)
        lef = height(root->left);
    if (root->right != NULL)
        rig = height(root->right);

    return max(lef, rig) + 1;
}
