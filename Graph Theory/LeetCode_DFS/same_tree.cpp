class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL) return true;
        else if(p!=NULL&&q!=NULL){
            if(p->val==q->val){
               int l=isSameTree(p->left,q->left);
                int r=isSameTree(p->right,q->right);
                return l and r;
            }
        }
        return false;
    }

};
