class Solution {
public:
    int result=0;
    int solve(TreeNode* root){
         if(root==NULL){
            return 0;
        }
        int l=solve(root->left);
        int r=solve(root->right);
        if(l+r>result){
            result=l+r;
        }
        return 1+max(l,r);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        solve(root);
        return result;

    }
};
