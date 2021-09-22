class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root,int t,int sum,vector<int>path)
    {
        if(root==NULL){
           // path.push_back(root->val);
            return;
        }
        path.push_back(root->val);

        dfs(root->left,t,sum,path);
        dfs(root->right,t,sum,path);
         int sum1=0;
        for(int i=path.size()-1;i>=0;i--){
            sum1+=path[i];
            if(sum1==t){
                ans++;

            }
        }
        path.pop_back();

    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        int sum=0;
        dfs(root,targetSum,sum,path);
        return ans;
    }
};
