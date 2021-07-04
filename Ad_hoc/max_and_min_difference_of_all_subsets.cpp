#include<bits/stdc++.h>
using namespace std;
int solve(int a[],int n)
{
    int mx=0,mn=0;
    int b=1;
    for(int i=0;i<=n;i++){
        mx+=(a[i]*b);
        b*=2;
    }
   // cout<<
    b=1;
    for(int i=n;i>=0;i--){
        mn+=(a[i]*b);
        b*=2;
    }
    return mx-mn;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);//must be sorted
    cout<<solve(a,n-1)<<endl;
}
