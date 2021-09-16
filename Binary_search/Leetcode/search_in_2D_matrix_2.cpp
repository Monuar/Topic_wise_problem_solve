class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<v.size();i++){
            int l=0;
            int r=m-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(v[i][mid]==t) return true;
                else if(v[i][mid]>t) r=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};
