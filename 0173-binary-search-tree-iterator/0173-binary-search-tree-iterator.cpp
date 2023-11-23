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
class BSTIterator {
    void inorder(TreeNode* root, vector<int> &v){
        if(!root) return;
        
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    int start;
    vector<int> v;
public:
    BSTIterator(TreeNode* root) {
        inorder(root,v);
        start =0;
    }
    
    int next() {
        if(start<v.size())
            return v[start++];
        
        return -1;
    }
    
    bool hasNext() {
        if(start<v.size()) return true;
        return false;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */