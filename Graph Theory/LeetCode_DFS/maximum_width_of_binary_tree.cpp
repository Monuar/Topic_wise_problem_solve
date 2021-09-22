class Solution {
public:


    int widthOfBinaryTree(TreeNode* root) {
        if(root==NULL) return 0;
        int result=1;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        while(!q.empty()){
            int count=q.size();
            int start=q.front().second;
            int end=q.back().second;
            result=max(result,end-start+1);
            for(int i=0;i<count;i++){
                pair<TreeNode*,int>p=q.front();
                long long ind=p.second;
                q.pop();
                if(p.first->left) q.push({p.first->left,2*ind+1});
                if(p.first->right) q.push({p.first->right,2*ind+2});

            }
        }
        return result;
    }
};
