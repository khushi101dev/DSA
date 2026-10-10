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
    bool checkTree(TreeNode* root) {
         if(root == nullptr) return true;
         if(root-> left == nullptr && root->right == nullptr) return true;

         int leftval = root->left ? root->left->val : 0 ;
         int rightval = root->right ? root->right->val : 0 ;

         return (root->val == leftval + rightval)&& checkTree(root->left) && checkTree(root->right);

        
    }
};