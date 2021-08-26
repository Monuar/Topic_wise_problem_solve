#include<bits/stdc++.h>
#define ll long long
using namespace std;
int bs(int a[],int n,int x)
{
    int l=0,r=n-1,ans=-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(a[mid]==x) return a[mid];
        else if(a[mid]>x){
           r=mid-1;
        }
        else{
            ans=a[mid];
            l=mid+1;
        }
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
    int ans=bs(a,n,x);
    cout<<ans<<endl;
}
