class Solution {
public:
    int minDepth(TreeNode* root) {
       if(root==NULL) return 0;
        queue<pair<TreeNode*,int>>q;
        int depth=1;
        q.push({root,depth});
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                pair<TreeNode*,int>p=q.front();
                q.pop();
                depth=p.second;
                TreeNode* cur=p.first;
                if(!cur->left&&!cur->right) return depth;
                if(cur->left) q.push({cur->left,depth+1});
                if(cur->right) q.push({cur->right,depth+1});
            }
        }
        return depth;
    }
};
