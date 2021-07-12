#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    ll t;
    cin>>t;
    string s;
    cin.ignore();
    ll a[10000];
    while(t--){

        getline(cin,s);
        stringstream ss(s);

        ll j=0;
        while(ss>>a[j]){
            ++j;
        }
        ll mx=0,ans;
        for(ll i=0;i<j;i++){
            for(ll k=i+1;k<j;k++){
                ans=gcd(a[i],a[k]);
                mx=max(ans,mx);
            }
        }
        cout<<mx<<endl;
    }
}
