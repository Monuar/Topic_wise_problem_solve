#include<bits/stdc++.h>
using namespace std;
int ceil(int a[],int n,int x)
{
    int l=0,r=n-1,ans=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==x) ans=a[mid];
        else if(a[mid]>x){
            ans=a[mid];
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
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    int x;
    cin>>x;
    int ans=ceil(a,n,x);
    cout<<ans<<endl;
}
