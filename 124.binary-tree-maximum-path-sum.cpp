/*
 * @lc app=leetcode id=124 lang=cpp
 *
 * [124] Binary Tree Maximum Path Sum
 */

// @lc code=start
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
    int mx=INT_MIN;
    int path;
    int maxPathSum(TreeNode* root) {
        if(maxPath(root)>mx)
        mx=path;
       return mx;
    }
    int maxPath(TreeNode* root) {
        if(root==NULL)
        return 0;
        path=max(maxPath(root->left), maxPath(root->right))+root->val;
        if(path > mx)
        mx=path;
        return path;
    }
};
// @lc code=end

