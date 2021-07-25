#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll l=0;
        ll r=n-1;
        vector<ll>v;
        while(l<r){
            v.push_back(a[l]);
            v.push_back(a[r]);
            l++;
            r--;
        }
        if(n%2==1) v.push_back(a[l]);
        for(auto it:v){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
