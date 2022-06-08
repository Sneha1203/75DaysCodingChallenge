bool areEqual(TreeNode *root1, TreeNode *root2) {
        if (root1 == NULL && root2 == NULL) {
            return true;
        } 
        
        if(root1 == NULL || root2 == NULL) {
            return false;
        }
        
        if (root1 -> val == root2 -> val) {
            return areEqual(root1 -> left, root2 -> left) && areEqual(root1 -> right, root2 -> right);
        } else {
            return false;
        }
    }
    
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL && subRoot == NULL) {
            return true;
        } 
        
        if (root == NULL || subRoot == NULL) {
            return false;
        } 
        
        if (areEqual(root, subRoot)) {
            return true;
        } else {
            return isSubtree(root -> left, subRoot) || isSubtree(root -> right, subRoot);
        }
    }