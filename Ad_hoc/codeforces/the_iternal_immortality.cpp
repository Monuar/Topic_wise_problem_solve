#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll ans=1;
    for(ll i=a+1;i<=b;i++){
        if(ans) ans=(ans*(i%10))%10;
        else break;
    }
    cout<<ans<<endl;
}
