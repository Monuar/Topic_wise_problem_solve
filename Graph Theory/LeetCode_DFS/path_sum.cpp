
class Solution {
public:
    int sum=0,rsum=0,cnt=0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
         sum+=root->val;
        if(root->left==NULL && root->right==NULL){
            if(sum==targetSum){
                return true;
            }
        }
        int l=hasPathSum(root->left,targetSum);
        int r=hasPathSum(root->right,targetSum);
        sum-=root->val;
        return l or r;
    }
};
