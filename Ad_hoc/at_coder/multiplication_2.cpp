#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,ans=1,z=0;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]==0) z=1;
    }
    if(z==1) cout<<'0'<<endl;
    else{
        for(ll i=0;i<n;i++){
            if(ans<=10e18/ar[i]) ans=ans*ar[i];
            else {
                ans=-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}
