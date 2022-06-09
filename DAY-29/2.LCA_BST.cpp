TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root == NULL) {
            return NULL;
        }
        if(root == p || root == q) {
            return root;
        }
        
        if((root -> val >= p -> val && root -> val <= q -> val) || (root -> val <= p -> val && root -> val >= q -> val)) {
            return root;
        }
        
        if(root -> val < p -> val && root -> val < q -> val) {
            return lowestCommonAncestor (root -> right, p, q);
        } else {
            return lowestCommonAncestor(root -> left, p, q);
        }
        
    }