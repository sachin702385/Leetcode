class Solution {
public:
    bool isMirror(TreeNode* p, TreeNode* q) {

        if(!p && !q) return true;
        if(!p || !q) return false;

        if(p->val != q->val)
            return false;

        bool ans1 = isMirror(p->left, q->right);
        bool ans2 = isMirror(p->right, q->left);

        return ans1 && ans2;
    }

    bool isSymmetric(TreeNode* root) {

        if(root == nullptr)
            return true;

        return isMirror(root->left, root->right);
    }
};