#include<bits/stdc++.h>
#define ll long long
using namespace std;
void bs(string a,ll n,char x)
{
    ll ans=-1,ans1=-1;
    ll l=0,r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==x){
            ans=mid;
            r=mid-1;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    l=0,r=n-1;
    while(l<=r){
        ll mid=(l+r)/2;
        if(a[mid]==x){
            ans1=mid;
            l=mid+1;
        }
        else if(a[mid]<x) l=mid+1;
        else r=mid-1;
    }
    //cout<<"ans1 "<<ans1<<" ans "<<ans<<endl;
    ans=ans1-ans+1;
    for(ll i=0;i<ans;i++) cout<<x;
}
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    char c=s[s.size()-1];
    bs(s,s.size(),c);
}
