bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL && q == NULL)
            return true;
        
        if (p == NULL || q == NULL)
            return false;
        
        bool check = (p-> val == q-> val);
        bool left = isSameTree(p -> left, q-> left);
        bool right = isSameTree(p -> right, q -> right);
        
        if (check && left && right)
            return true;
        else
            return false;
    }