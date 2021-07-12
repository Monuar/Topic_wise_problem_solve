#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=1;i<=n;i++) cin>>a[i];
        vector<ll>v;
        v.push_back(0);
        for(ll i=1;i<=n;i++){
            v.push_back(gcd(v[i-1],a[i]));
           // v.push_back(v[i]*i);
        }
        for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
        cout<<endl;
        sort(v.begin(),v.end());
        cout<<v[v.size()-1]<<endl;
    }
}
