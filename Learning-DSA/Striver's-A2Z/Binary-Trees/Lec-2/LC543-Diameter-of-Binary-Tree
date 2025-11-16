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
//O(n^2), O(n)

class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int leftSubtree = maxHeight(root->left);
        int rightSubtree = maxHeight(root->right);
        return max(max(leftSubtree+rightSubtree, diameterOfBinaryTree(root->left)), diameterOfBinaryTree(root->right));
    }
private:
    int maxHeight(TreeNode* root)
    {
        if (!root) return 0;
        return 1+max(maxHeight(root->left),maxHeight(root->right));
    }
};

//O(n), O(n)

class Solution {
public:
    int dia = 0;
    
    int checkHeight(TreeNode* root){
        if (!root) return 0;
        int left = checkHeight(root->left);
        int right = checkHeight(root->right);
        dia = max(dia, left+right+1-1);
        return 1+max(left,right);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        checkHeight(root);
        return dia;
    }

};
