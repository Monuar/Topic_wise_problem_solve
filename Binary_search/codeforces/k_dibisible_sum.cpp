#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n<=k){
            ll a=k/n;
            ll b=k%n;
            if(b!=0) a++;
            cout<<a<<endl;
        }
        else{
            ll x=n/k;
            ll y=n%k;
            if(y!=0) x++;
            ll c=k*x;
            ll a=c/n;
            ll b=c%n;
            if(b!=0) a++;
            cout<<a<<endl;
        }

    }
}
