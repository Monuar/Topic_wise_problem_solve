class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL) return v;
        queue<TreeNode* >q;
        int cnt=0;
        q.push(root);
        while(!q.empty()){
            cnt++;
            int n=q.size();
            vector<int>temp;
            for(int i=0;i<n;i++){
                auto cur=q.front();
                q.pop();
                 temp.push_back(cur->val);
                if(cur->left) q.push(cur->left);
                if(cur->right) q.push(cur->right);
            }
            if(cnt%2==0) reverse(temp.begin(),temp.end());
            v.push_back(temp);
        }
        return v;
    }
};
