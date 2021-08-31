class Solution {
public:
    int missingNumber(vector<int>& v) {
        int sum=0,i,n=v.size();
        for( i=0;i<n;i++){
            sum+=v[i];
        }
        int sum1=(n*(n+1))/2;
       return sum1-sum;
    }
};
