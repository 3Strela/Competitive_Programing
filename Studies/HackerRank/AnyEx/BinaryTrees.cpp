		int getHeight(Node* root)
        {
            if (root->left == NULL && root->right == NULL)
                return 0;
                
            int lef = 0, rig = 0;
            if (root->left != NULL)
                lef = getHeight(root->left);
            if (root->right != NULL)
                rig = getHeight(root->right);
                
            return max(lef, rig) + 1;
        }