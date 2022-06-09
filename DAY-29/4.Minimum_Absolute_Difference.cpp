void getInorder(TreeNode* root, vector<int> &inorder) {
        if(root == NULL) {
            return;
        }
        getInorder(root -> left, inorder);
        inorder.push_back(root -> val);
        getInorder(root -> right, inorder);
    }
    
    int getMinimumDifference(TreeNode* root) {
        vector<int> inorderTraversal;
        getInorder(root, inorderTraversal);
        vector<int> absDiff;
        for(int i = 1; i < inorderTraversal.size(); i++) {
            absDiff.push_back(inorderTraversal[i] - inorderTraversal[i - 1]);
        }
        return *min_element(absDiff.begin(), absDiff.end());
    }