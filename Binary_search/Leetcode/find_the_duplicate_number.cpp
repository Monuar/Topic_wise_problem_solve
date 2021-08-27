class Solution {
public:
    int findDuplicate(vector<int>& v) {
       int l=0,r=v.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            int cnt=0;
            for(auto it:v){
                if(it<=mid) cnt++;
            }
            if(cnt<=mid) l=mid+1;
            else r=mid-1;
        }
        return l;

    }
};
