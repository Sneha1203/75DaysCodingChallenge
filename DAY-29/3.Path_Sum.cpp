bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL) {
            return false;
        }
        
        if(root -> right == NULL && root -> left == NULL && root -> val == targetSum) {
            return true;
        }
        
        targetSum = targetSum - root -> val;
        return hasPathSum(root -> left, targetSum) || hasPathSum(root -> right, targetSum);
    }