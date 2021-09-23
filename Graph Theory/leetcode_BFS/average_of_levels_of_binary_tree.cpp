class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*>q;
        vector<double>v;
        q.push(root);
        while(!q.empty()){
            double sum=0.0;
            int count=q.size();
            for(int i=0;i<count;i++){
                TreeNode* cur=q.front();
                q.pop();
                sum+=cur->val;
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            v.push_back(sum/count);
        }
        return v;
    }
};
