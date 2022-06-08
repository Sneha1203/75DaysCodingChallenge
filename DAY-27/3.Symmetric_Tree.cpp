bool isMirror(TreeNode *root1, TreeNode *root2) {
        if(root1 == NULL && root2 == NULL) {
            return true;
        }
        
        if(root1 == NULL || root2 == NULL) {
            return false;
        }
        
        if(root1 -> val != root2 -> val) {
            return false;
        }
        
        bool cond1 = isMirror(root1 -> left, root2 -> right);        
        bool cond2 = isMirror(root2 -> left, root1 -> right);

        return cond1 && cond2;
            
    }
    
    bool isSymmetric(TreeNode* root) {
        return isMirror(root, root);
    }