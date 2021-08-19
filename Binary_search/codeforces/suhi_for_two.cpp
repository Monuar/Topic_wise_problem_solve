#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    ll cur=1,prev=0,ans=0;
    for(ll i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            prev=cur;
            cur=1;
        }
        else cur++;
        ans=max(ans,min(prev,cur));
    }
    cout<<ans*2<<endl;
}
