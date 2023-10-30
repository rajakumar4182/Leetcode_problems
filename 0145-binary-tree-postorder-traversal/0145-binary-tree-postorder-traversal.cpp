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
    vector<int> postorderTraversal(TreeNode* root) {
        //Using two stacks
        
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode* > s1,s2;
        
        s1.push(root);
        
        while(!s1.empty()){
            TreeNode* cur = s1.top();
            s1.pop();
            s2.push(cur);
            
            if(cur->left) s1.push(cur->left);
            if(cur->right) s1.push(cur->right);
        }
        
        while(!s2.empty()){
            ans.push_back(s2.top()->val);
            s2.pop();
        }
        return ans;
    }
};