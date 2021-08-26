#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int x)
{
    int l=0,r=n-1,ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid+1]<a[mid]&&mid<r)
        {
            ans=mid+1;
            break;
        }
        else if(a[mid-1]>a[mid]&&l<mid){
            ans=mid;
            break;
        }
        if(a[mid]<a[r]) r=mid-1;
        else l=mid+1;
    }
    return ans;

}
int binsearch(int a[],int l,int r,int x)
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
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int ind=bs(a,n,x);
    int ans1=binsearch(a,0,ind-1,x);
    int ans2=binsearch(a,ind,n-1,x);
    cout<<max(ans1,ans2)<<endl;
}
