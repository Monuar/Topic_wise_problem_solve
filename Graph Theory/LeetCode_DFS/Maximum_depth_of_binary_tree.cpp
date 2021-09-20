class Solution {
public:

    int solve(TreeNode*& root)
    {

        if(root == nullptr)
        {
            return 0;
        }

        int l = solve(root->left);
        int r = solve(root->right);
        return 1+max(l,r);
    }

    int maxDepth(TreeNode* root) {
         int ans=solve(root);
         return ans;

    }
};
