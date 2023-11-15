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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        if(!root) return newNode;
        
        TreeNode* cur = root;
        TreeNode* parent = nullptr;
        
        while(cur){
            parent = cur;
            if(cur->val < val){
                cur = cur->right;
            }
            else{
                cur = cur->left;
            }
        }
        if(parent->val > val) parent->left = newNode;
        else parent->right = newNode;
        
        return root ? root : newNode;
    }
};