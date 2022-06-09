vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector <vector<int>> zigzagOrder;
        if(root == NULL) {
            return zigzagOrder;
        }
        
        stack<TreeNode *> currLevel;
        stack<TreeNode *> nextLevel;
        bool LR = true;
        
        currLevel.push(root);
        vector<int> nodeValPerLevel;
        while(!currLevel.empty()) {
            
            TreeNode *temp = currLevel.top();
            currLevel.pop();
            nodeValPerLevel.push_back(temp -> val);
            if(LR) {
                if(temp -> left)
                    nextLevel.push(temp -> left);
                if(temp -> right)
                    nextLevel.push(temp -> right);
            } else {
                if(temp -> right)
                    nextLevel.push(temp -> right);
                if(temp -> left)
                    nextLevel.push(temp -> left);
            }
            
            if(currLevel.empty()) {
                LR = ! LR;
                swap(currLevel, nextLevel);
                zigzagOrder.push_back(nodeValPerLevel);
                nodeValPerLevel.clear();
            }
            
        }
//         deque<TreeNode *> q;
//         q.push_back(root);
//         bool leftRight = false;
//         while(!q.empty()) {
//             vector <int> nodeValPerLevel;
//             int queueSize = q.size();
            
//             for(int i = 0; i < queueSize; i++) {
//                 if(leftRight) {
//                     TreeNode *temp = q.front();
//                     q.pop_front();
//                     nodeValPerLevel.push_back(temp -> val);
//                     if(temp -> left)
//                         q.push_back(temp -> left);
//                     if(temp -> right)
//                         q.push_back(temp -> right);
//                 } else {
//                     TreeNode *temp = q.back(); 
//                     q.pop_back();
//                     nodeValPerLevel.push_back(temp -> val);
//                     if(temp -> right)
//                         q.push_back(temp -> right);
//                     if(temp -> left)
//                         q.push_back(temp -> left);
//                 }  
//             }
            // if(leftRight) {
            //     reverse(nodeValPerLevel.begin(), nodeValPerLevel.end());
            //     zigzagOrder.push_back(nodeValPerLevel);
            // }
            // else {
            //     zigzagOrder.push_back(nodeValPerLevel);
            // }
            // leftRight = !leftRight;                
            // zigzagOrder.push_back(nodeValPerLevel);

            
        // }
        return zigzagOrder;
    }