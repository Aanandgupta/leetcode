/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        vector<int>ary ;
        while(1)
        {
            while(root!=NULL)
            {
                stack.push(root);
                root=root->left;
            }
            if(stack.empty())
            return ary;
            root=stack.top();
            stack.pop();
            ary.push_back(root->val);
            root=root->right;
        }
       
        
    }
};
// @lc code=end

