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
    vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> result;
//         if(root == NULL) return result;
        
//         queue<TreeNode*> nodes;
//         nodes.push(root);
//         bool leftToRight = true;
        
//         while(!nodes.empty()){
//             int size = nodes.size();
//             vector<int> ans(size);
            
            
//             for(int i=0; i<size; i++){
//                 TreeNode* node = nodes.front();
//                 nodes.pop();
                
//                 int index = (leftToRight) ? i : size-i-1;
                
//                 ans[index] = node->val;
                
//                 if(node->left) nodes.push(node->left);
//                 if(node->right) nodes.push(node->right);
//             }
//             result.push_back(ans);
//         }
//         return result;
        
        
        
        
        vector<vector<int>> result;
        if(root == NULL) return result;
        
        queue<TreeNode*> nodes;
        nodes.push(root);
        bool leftToRight = true;
        
        while(!nodes.empty()){
            int size = nodes.size();
            vector<int> ans;
            
            
            for(int i=0; i<size; i++){
                TreeNode* node = nodes.front();
                nodes.pop();
                
                // ans[index] = node->val;
                ans.push_back(node->val);
                
                if(node->left) nodes.push(node->left);
                if(node->right) nodes.push(node->right);
            }
            result.push_back(ans);
        }
        return result;
    }
};