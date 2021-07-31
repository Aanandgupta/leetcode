class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        while(p&&q){
            if(p->val!=q->val)
            {
                return false;
            }
            return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        }
        if(p==NULL && q==NULL)
        return true;
        return false;

    }
// private:
//     void traversal(TreeNode* p)
//     {
//         if(p==null)
//         return;
//         traversal(p->left);
//         traversal(p->right);

//     }

};
// @lc code=end

