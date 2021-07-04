class Solution {
public:
    vector<int> xorQueries(vector<int>& v, vector<vector<int>>& q) {
        vector<int>pre;
        pre.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            pre.push_back(pre[i-1]^v[i]);
        }
        vector<int>ans;
        for(int i=0;i<q.size();i++){
            int l,r;
            l=q[i][0];
            r=q[i][1];
            if(l==0) ans.push_back(pre[r]);
            else{
                ans.push_back(pre[r]^pre[l-1]);
            }
        }
        return ans;
    }
};
