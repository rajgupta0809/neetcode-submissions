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
    bool BST(TreeNode* root, int left, int right){
        if(root == NULL) return true;

        if(root->val <= left || root->val >= right) return false;
        return BST(root->left, left, root->val) && BST(root->right, root->val, right);
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return root;
        int left = INT_MIN;
        int right = INT_MAX;
        return BST(root, left, right);
    }
};
