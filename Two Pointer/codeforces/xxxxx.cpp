#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll cnt1=0,cnt2=0;
        ll sum1=0,sum2=0;
        for(ll i=0;i<n;i++){
            sum1+=a[i];
            if(sum1%x!=0){
                cnt1=i+1;
            }
            //else break;
        }
        for(ll i=n-1;i>=0;i--){
            sum2+=a[i];
            if(sum2%x!=0) cnt2=n-i;

        }
        if(cnt1==0&&cnt2==0) cout<<-1<<endl;
        else cout<<max(cnt1,cnt2)<<endl;
    }
}
