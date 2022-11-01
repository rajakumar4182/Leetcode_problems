/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) return result;
        
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool flag = 1; //flag = leftToRight (we can write leftToRight instead of flag)
        while(!nodesQueue.empty()){
            int size = nodesQueue.size();
            vector<int> row(size);
            for(int i =0;i<size;i++){
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();
                int index = (flag) ? i: size -1-i;
                row[index] = node->val;
                if(node->left) 
                    nodesQueue.push(node->left);
                if(node->right) 
                    nodesQueue.push(node->right);
            }
            flag = !flag;
            result.push_back(row);
        }
        return result;
    }
};