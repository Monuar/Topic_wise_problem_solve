class Solution {
public:
    int lengthOfLIS(vector<int>& v) {
        vector<int>v1;
        v1.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            if(v1.back()<v[i]){
                v1.push_back(v[i]);
            }
            else{
                int ind=lower_bound(v1.begin(),v1.end(),v[i])-v1.begin();
                v1[ind]=v[i];
            }
        }
        return v1.size();
    }
};
