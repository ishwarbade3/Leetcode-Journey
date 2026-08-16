/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL)
            return true;
        if (root == NULL)
            return false;

        if (root->val == subRoot->val) {
            if (isSub(root, subRoot))
                return true;
        }
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
    bool isSub(TreeNode* root, TreeNode* sub) {

        if (root == NULL && sub == NULL)
            return true;

        if (root == NULL || sub == NULL)
            return false;

        if (root->val != sub->val)
            return false;

        return isSub(root->left, sub->left) && isSub(root->right, sub->right);
    }
};