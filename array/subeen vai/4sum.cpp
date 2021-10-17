class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int target) {
        int n=a.size();
        if(n<4) return {};
        vector<vector<int>>result;
        set<vector<int>>s;
        int   sum;
      //  unordered_set<int>s;
        sort(a.begin(),a.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int new_target=target-a[i]-a[j];
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int sum=a[l]+a[r];
                    if(sum>new_target) r--;
                    else if(sum<new_target) l++;
                    else{
                        s.insert({a[i],a[j],a[l],a[r]});
                        l++;
                        r--;
                    }
                }

            }
        }
        for(auto i:s) result.push_back(i);
        return result;
    }
};
