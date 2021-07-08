#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<ll>s;
void CountDivisors(ll n)
{
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            ll x=i;
            ll y=n/i;
            s.insert(x);
            s.insert(y);
        }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        CountDivisors(n);
        cout<<s.size()<<endl;
        for(auto it:s) cout<<it<<" ";
        cout<<endl;
        s.clear();
    }
}
