#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        vector<ll>v1,v2;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0) v1.push_back(a[i]);
            else v2.push_back(a[i]);
        }
        ll ans=0;
        for(ll i=0;i<v1.size();i++){
            ans+=(n-(i+1));
        }
        for(ll i=0;i<v2.size();i++){
            for(ll j=i+1;j<v2.size();j++){
                if(__gcd(v2[i],v2[j])>1) ans++;
            }
        }
        cout<<ans<<endl;
    }
}
