class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* cur=q.front();
                q.pop();
                temp.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            ans.push_back(temp);
        }
        return ans;

    }
};
