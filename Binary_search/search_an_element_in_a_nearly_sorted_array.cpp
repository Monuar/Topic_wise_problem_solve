#include<bits/stdc++.h>
using namespace std;
int ns(int a[],int n,int x)
{
    int l=0;
    int r=n;
    int ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x){
            ans=mid;
            break;

        }
        else if(l<=mid-1&&a[mid-1]==x){
            ans=mid-1;
            break;
        }
        else if(r>=mid+1&&a[mid+1]==x){
            ans=mid+1;
            break;
        }
        if(a[mid]>x) r=mid-2;
        else l=mid+2;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int x;
    cin>>x;
    int ans=ns(a,n,x);
    cout<<ans<<endl;
}
