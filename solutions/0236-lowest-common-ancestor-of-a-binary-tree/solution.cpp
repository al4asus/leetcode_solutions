/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr || root == p || root == q){
            return root;
        }

        TreeNode* leftReport = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightReport = lowestCommonAncestor(root->right, p, q);

        if (leftReport != nullptr && rightReport != nullptr){
            return root;
        }

        return leftReport != nullptr ? leftReport : rightReport;
    }
};
