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
    // TreeNode* sortedArrayToBST(vector<int>& nums) {
    //     return arrToBST(nums, 0, nums.size()-1);
    // }
    // TreeNode* arrToBST(vector<int>& n, int left, int right) {
    //     if (left > right)
    //         return NULL;

    //     int mid = left + (right - left) / 2;
    //     TreeNode* root = new TreeNode(n[mid]);
    //     root->left =arrToBST(n, left, mid - 1);
    //     root->right=arrToBST(n, mid + 1, right);

    //     return root;
    //}
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return arrToBST(nums, 0, nums.size() - 1);
    }

    TreeNode* arrToBST(vector<int>& nums, int left, int right) {
        if (left > right)
            return NULL;

        int mid = left + (right - left) / 2;

        TreeNode* root = new TreeNode(nums[mid]);

        root->left = arrToBST(nums, left, mid - 1);
        root->right = arrToBST(nums, mid + 1, right);

        return root;
    }
};