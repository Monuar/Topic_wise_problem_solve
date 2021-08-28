class Solution {
public:
   int binsearch(vector<int>a,int l,int r,int x)
{
    int ans=-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(x==a[mid]){
           ans=mid;
           return ans;
        }
        if(a[mid]>x){
            r=mid-1;
        }
        else l=mid+1;
    }
    return ans;
}
    int search(vector<int>& a, int t) {
        int l=0,r=a.size()-1,ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(mid<r&&a[mid+1]<a[mid])
        {
            ans=mid+1;
            break;
        }
        else if(l<mid&&a[mid-1]>a[mid]&&l<mid){
            ans=mid;
            break;
        }
        if(a[mid]<a[r]) r=mid-1;
        else l=mid+1;
    }

        int ans1=binsearch(a,0,ans-1,t);
         int ans2=binsearch(a,ans,a.size()-1,t);
        if(ans1>ans2) return ans1;
        return ans2;

    }
};
