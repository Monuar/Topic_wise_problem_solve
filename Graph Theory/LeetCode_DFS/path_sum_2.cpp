class Solution {
public:

    vector<vector<int>>ans;
   // vector<int>path;
    int dfs(TreeNode* root,int t,int sum,vector<int>path)
    {
        if(root==NULL) return 0;
        sum+=root->val;
        path.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            if(t==sum){
                ans.push_back(path);
                return 0;
            }
        }
        int l=dfs(root->left,t,sum,path);
        int r=dfs(root->right,t,sum,path);
        sum-=root->val;
        path.pop_back();
        return l or r;
    }
    vector<vector<int>> pathSum(TreeNode* r, int t) {
       // path.clear();
        vector<int>path;
        int sum=0;
        dfs(r,t,sum,path);
        return ans;
    }
};
