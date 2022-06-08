int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int leftDepth = maxDepth(root -> left);
        int rightDepth = maxDepth(root -> right);
        
        return max(leftDepth, rightDepth) + 1;

    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        
        int lh = maxDepth(root -> left);
        int rh = maxDepth(root -> right);
        
        int currDiameter = lh + rh;
        int leftDiameter = diameterOfBinaryTree(root -> left);
        int rightDiameter = diameterOfBinaryTree(root -> right);
        
        return max(currDiameter, max(leftDiameter, rightDiameter));
    }