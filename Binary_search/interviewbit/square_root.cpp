int Solution::sqrt(int x) {
    if(x==0) return 0;
    int l=1,r=x;
    int ans;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(mid==x/mid){
            ans=mid;
            break;
        }
        else if(mid<x/mid){
            ans=mid;
            l=mid+1;
        }
        else r=mid-1;
    }
    return ans;
}

