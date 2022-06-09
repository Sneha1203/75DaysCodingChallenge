vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector <int>> levelOrderTraversal;
        if(root == NULL) {
            return levelOrderTraversal;
        }
        
        queue <TreeNode *> q;
        q.push(root);
        
        while(!q.empty()) {
            int queueSize = q.size();
            vector<int> nodeValPerLevel;
            for(int i =0; i < queueSize; i++) {
                TreeNode *temp = q.front();
                nodeValPerLevel.push_back(temp -> val);
                q.pop();
                if (temp -> left)
                    q.push(temp -> left);
                if(temp -> right)
                    q.push(temp -> right);
            }
            levelOrderTraversal.push_back(nodeValPerLevel);
        }
        return levelOrderTraversal;
    }