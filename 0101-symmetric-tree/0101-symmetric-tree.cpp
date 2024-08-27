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
   bool isSymmetric(TreeNode* root) {
    return root == NULL || isSymmetricHelp(root->left, root->right);
}

bool isSymmetricHelp(TreeNode* left, TreeNode* right) {
    // Check if both nodes are null, meaning they are symmetric at this level
    if (left == NULL || right == NULL) return left == right;
    
    // If the values of the nodes are different, they are not symmetric
    if (left->val != right->val) return false;
    
    // Recursively check if the left subtree is a mirror of the right subtree and vice versa
    return isSymmetricHelp(left->left, right->right) 
        && isSymmetricHelp(left->right, right->left);
}
};