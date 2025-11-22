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

//O(n^2), O(h)

class Solution {
public:
    int maxHeight(TreeNode* root){
        if (root==nullptr) return 0; 
        return 1+max(maxHeight(root->left),maxHeight(root->right));
    }
    
    bool isBalanced(TreeNode* root) {
         if (root==nullptr) return true;
         int bal = maxHeight(root->left)-maxHeight(root->right);
         if (bal!=0 && bal!=-1 && bal!=1) return false;
         return isBalanced(root->left) && isBalanced(root->right);
    }
};

//O(n), O(h)

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (checkHeight(root)==-1) return false;
        return true;
    }

private:
    int checkHeight(TreeNode* node) {
        if (!node) return 0;

        int leftHeight = checkHeight(node->left);
        if (leftHeight == -1) return -1;

        int rightHeight = checkHeight(node->right);
        if (rightHeight == -1) return -1;

        if (abs(leftHeight - rightHeight) > 1) return -1;

        return max(leftHeight, rightHeight) + 1;
    }
};
