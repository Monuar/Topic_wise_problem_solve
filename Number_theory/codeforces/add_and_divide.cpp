#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b,ans=1e9;
        cin>>a>>b;
        ll cnt1=0,cnt2=0;
        if(a<b) cout<<1<<endl;
        else{
            ll i=1;
            ll c=b,d;
            if(c==1) c+=1;
            while(i<=11){
                ll x=c-b,z=0,d=a;
                while(1){
                    d/=c;
                    z++;
                    if(d==0) break;

                }
                x+=z;
                ans=min(ans,x);
               // cout<<"ans "<<ans<<endl;
                i++,c++;
            }
            cout<<ans<<endl;
        }

    }
}
