#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll dif=240-k;
    ll l=0,r=n;
    while(l<=r){
        ll mid=(l+r)/2;
        if((5*(mid*(mid+1)))/2<=dif) l=mid+1;
        else r=mid-1;
        cout<<"l"<<" "<<l<<" r "<<r<<endl;

    }
    cout<<r<<endl;
}
