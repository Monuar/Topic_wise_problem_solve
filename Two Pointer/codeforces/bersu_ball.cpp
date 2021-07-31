#include<bits/stdc++.h>
using namespace std;
void solve(int a[],int b[],int n,int m)
{
    int ans=0;
    int i=0,j=0;
    while(i<n&&j<m){
        int dif=(a[i]-b[j]);
        if(abs(dif)<=1) {
            ans++;
            i++;
            j++;
        }
        else if(dif>1) j++;
        else i++;
    }
    cout<<ans<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    solve(a,b,n,m);
}
