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
    bool isSameTree(TreeNode* first, TreeNode* second){
        if(first == NULL && second == NULL) return true;
        if(first == NULL || second == NULL) return false;

        if(first->val != second->val) return false;

        return isSameTree(first->left, second->left) && isSameTree(first->right, second->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL && subRoot == NULL) return true;
        if(root==NULL && subRoot != NULL) return false;
        if(root!=NULL && subRoot == NULL) return true;

        if(isSameTree(root, subRoot)){
            return true;
        }       

        bool left = isSubtree(root->left, subRoot);
        bool right = isSubtree(root->right, subRoot);

        return left || right;
    }
};