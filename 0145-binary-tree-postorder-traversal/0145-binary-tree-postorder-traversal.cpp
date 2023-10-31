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
        //Using one stacks
        
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode*> st;
        TreeNode* cur = root;
        while(cur!=NULL || !st.empty()){
            if(cur!=NULL){
                st.push(cur);
                cur = cur->left;
            }
            else{
                TreeNode* temp = st.top()->right;
                if(temp==NULL){
                    temp = st.top();
                    st.pop();
                    ans.push_back(temp->val);
                    while(!st.empty() && temp == st.top()->right){
                        temp = st.top();
                        st.pop();
                        ans.push_back(temp->val);
                    }
                }
                else{
                    cur = temp;
                }
            }
        }
        return ans;
        
        
        //Using two stacks
        
//         vector<int> ans;
//         if(!root) return ans;
//         stack<TreeNode* > s1,s2;
        
//         s1.push(root);
        
//         while(!s1.empty()){
//             TreeNode* cur = s1.top();
//             s1.pop();
//             s2.push(cur);
            
//             if(cur->left) s1.push(cur->left);
//             if(cur->right) s1.push(cur->right);
//         }
        
//         while(!s2.empty()){
//             ans.push_back(s2.top()->val);
//             s2.pop();
//         }
//         return ans;
    }
};