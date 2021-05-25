	void levelOrder(Node * root)
    {
        //Write your code here
        queue<Node *> fl;
        fl.push(root);
        
        while (!fl.empty())
        {
            Node * curr = fl.front();
            fl.pop();
            cout << curr->data << " ";
            if (curr->left != NULL)
                fl.push(curr->left);
            if (curr->right != NULL)
                fl.push(curr->right);
        }
	}